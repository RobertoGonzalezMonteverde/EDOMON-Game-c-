#include <vector>
#include "Punt2D.h"
#include "Tentber.h"
#include "atack.h"
#include "raylib.h"
#include "Tackle.h"
#include "Scratch.h"
#include "Bubble.h"
#include "Leafs.h"

using namespace std;
Tentber::Tentber(){
    nom="Tentber";
    vida=300;
    //vidacontrincant=300;
    tx=LoadTexture("Osi.png");
 atacks.push_back(new Tackle());
 atacks.push_back(new Scratch());
 atacks.push_back(new Bubble());
 atacks.push_back(new Leafs());
}
void Tentber::showat()
{             DrawText("1.->Tackle",20,220,20,BLACK);
              DrawText("2.->Scratch",160,220,20,BLACK);
              DrawText("3.->Bubble",20,260,20,BLACK);
              DrawText("4.->Leafs",160,260,20,BLACK);}



