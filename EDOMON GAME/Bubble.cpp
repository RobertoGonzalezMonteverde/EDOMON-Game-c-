#include "Punt2D.h"
#include <cstdlib>
#include "raylib.h"
#include "Bubble.h"
using namespace std;

Bubble::Bubble(){
    nom="Bubble";
    damage=37;
    tx= LoadTexture("Bubbles.png");

}
