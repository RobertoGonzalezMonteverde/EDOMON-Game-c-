#include <vector>
#include "Punt2D.h"
#include "Roarsours.h"
#include "Atack.h"
#include "raylib.h"
#include "Tackle.h"
#include "Scratch.h"
#include "Punch.h"
#include "Bite.h"

using namespace std;
Roarsours::Roarsours(){
    nom="Roarsours";
    vida=300;
    //vidacontrincant=300;
    tx=LoadTexture("Dino.png");
 atacks.push_back(new Tackle());
 atacks.push_back(new Scratch());
 atacks.push_back(new Punch());
 atacks.push_back(new Bite());
}
void Roarsours::showat()
{             DrawText("1.->Tackle",20,220,20,BLACK);
              DrawText("2.->Scratch",160,220,20,BLACK);
              DrawText("3.->Punch",20,260,20,BLACK);
              DrawText("4.->Bite",160,260,20,BLACK);}


