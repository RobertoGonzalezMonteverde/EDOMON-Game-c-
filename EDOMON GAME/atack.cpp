
#include "Punt2D.h"
#include <cstdlib>
#include "raylib.h"
#include "atack.h"


using namespace std;
Atack::Atack(){}
void Atack:: show_damage(Punt2D uno, Punt2D dos, int& resta)
{
for (int l=0; l<6;l++)
    {DrawTextureRec(tx, {uno.x, uno.y, 96, 96}, {dos.x, dos.y}, WHITE); EndDrawing();}
    EndDrawing();
 resta =((damage-10)+(rand()%(damage+1)));
}
