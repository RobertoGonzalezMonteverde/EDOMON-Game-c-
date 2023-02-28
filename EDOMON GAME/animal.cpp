#include <vector>
#include "Punt2D.h"
#include "animal.h"
#include "atack.h"
#include "raylib.h"
using namespace std;

Animal::Animal(){}
void Animal::pinta(Punt2D uno, Punt2D dos){
        DrawTextureRec(tx, {uno.x, uno.y, 96, 96}, {dos.x, dos.y}, WHITE);
}

void Animal:: atac(int i, int& resta_, Punt2D uno, Punt2D dos)
{
    atacks[i]->show_damage(uno, dos,resta_);
}
void Animal:: reception(int menos)
{
           vida = vida-menos;
           //vidacontrincant = vidacontrincant-menos;//++++++++++++
}
void Animal::wins() //const
{
    DrawText("Congratulations!", 26, 130, 30, MAROON);
}
void Animal::lose() //const
    {
        DrawText("Game Over", 70, 130, 30, MAROON);
    }
void Animal::cambia_pose(Punt2D& pos)
{
 if(pos.x==0){pos.x=96;}
 else if(pos.x==96){pos.x=0;}
 if(pos.x==192){pos.x=288;}
 else if(pos.x==288){pos.x=192;}
}
void Animal::cambia_pose_avant(Punt2D& pos)
{
 if(pos.x==0){pos.x=20;}
 else if(pos.x==210){pos.x=180;}
}
void Animal::cambia_pose_enr(Punt2D& pos)
{
 if(pos.x==20){pos.x=0;}
 else if(pos.x==180){pos.x=210;}
}
   void Animal::showat(){}
void Animal::showvida()
{
    DrawText(FormatText("Salud: %03i", vida), 150, 160, 20, BLUE);
}
void Animal::showvida2()
{
     DrawText(FormatText("V.Enemigo: %03i", vida), 40, 50, 20, BLUE);
}


