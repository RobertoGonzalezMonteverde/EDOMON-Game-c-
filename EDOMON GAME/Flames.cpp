#include "Punt2D.h"
#include <cstdlib>
#include "raylib.h"
#include "Flames.h"
using namespace std;

Flames::Flames(){
    nom="Flames";
    damage=40;
    tx= LoadTexture("fire.png");

}
