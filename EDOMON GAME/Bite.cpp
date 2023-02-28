#include "Punt2D.h"
#include <cstdlib>
#include "raylib.h"
#include "Bite.h"
using namespace std;

Bite::Bite(){
    nom="Bite";
    damage=30;
    tx= LoadTexture("bite.png");

}
