#include "Punt2D.h"
#include <cstdlib>
#include "raylib.h"
#include "Water.h"
using namespace std;

Water::Water(){
    nom="Water";
    damage=40;
    tx= LoadTexture("Water.png");

}
