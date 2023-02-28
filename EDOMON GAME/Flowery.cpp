#include <vector>
#include "Punt2D.h"
#include "Atack.h"
#include "Animal.h"
#include "Flowery.h"
#include "raylib.h"
#include "Tackle.h"
#include "Scratch.h"
#include "Kick.h"
#include "Flames.h"
#include<sstream>

using namespace std;
Flowery::Flowery(){
    nom="Flowery";
    vida=300;
    //vidacontrincant=300;
    tx = LoadTexture("Flori.png");
 atacks.push_back(new Tackle());
 atacks.push_back(new Scratch());
 atacks.push_back(new Kick());
 atacks.push_back(new Flames());
}
void Flowery::showat(){DrawText("1.->Tackle",20,220,20,BLACK);
              DrawText("2.->Scratch",160,220,20,BLACK);
              DrawText("3.->Kick",20,260,20,BLACK);
              DrawText("4.->Flames",160,260,20,BLACK);}

