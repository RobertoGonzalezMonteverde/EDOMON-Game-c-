#include <vector>
#include "Punt2D.h"
#include "Snaflire.h"
#include "atack.h"
#include "raylib.h"
#include "Tackle.h"
#include "Bite.h"
#include "Confution.h"
#include "Water.h"
using namespace std;
Snaflire::Snaflire(){
    nom="Snaflire";
    vida=300;
    //vidacontrincant=300;
    tx=LoadTexture("Snkfire.png");
 atacks.push_back(new Tackle());
 atacks.push_back(new Bite());
 atacks.push_back(new Confution());
 atacks.push_back(new Water());
}
void Snaflire::showat()
{             DrawText("1.->Tackle",20,220,20,BLACK);
              DrawText("2.->Bite",180,220,20,BLACK);
              DrawText("3.->Confusion",20,260,20,BLACK);
              DrawText("4.->Water",180,260,20,BLACK);}


