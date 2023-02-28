#include "Punt2D.h"
#include <cstdlib>
#include "raylib.h"
#include "Punch.h"
using namespace std;

Punch::Punch(){
    nom="Punch";
    damage=30;
    tx= LoadTexture("punch.png");

}
