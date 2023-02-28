
#include <iostream>
#include <vector>
using namespace std;

int main() {
   int *pa = nullptr;

   pa = new int; // Crea una variable nova no lligada
                 // a cap funció.
   *pa = 3;
   delete pa; // Destrium la variable que havíem creat.

   vector<float*> punters;
   for (int i = 0; i < 200; i++) {
      punters.push_back(new float);
   }
   *punters[0] = 7.3;
   *punters[15] = 100.01;

   punters.push_back(nullptr);

}
