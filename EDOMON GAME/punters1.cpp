
#include <iostream>
using namespace std;

int main() {
   int a = 5;
   int *pa; // Declarem un punter a enters 'pa'
   pa = &a; // Guardem a 'pa' l'adreça de 'a'
   int *pa2;
   pa2 = &a;
   int *pa3, *pa4;
   pa3 = nullptr;

   *pa = 7;   // Canviem indirectament el valor de 'a'
   *pa2 = 13; // idem


}
