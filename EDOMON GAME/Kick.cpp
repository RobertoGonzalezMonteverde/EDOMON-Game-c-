#include "Punt2D.h"
#include <cstdlib>
#include "raylib.h"
#include "Kick.h"
using namespace std;

Kick::Kick(){
    nom="Kick";
    damage=26;
    tx= LoadTexture("kick.png");

}
