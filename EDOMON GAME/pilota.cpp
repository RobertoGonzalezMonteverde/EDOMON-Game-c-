
#include "raylib.h"
#include "pilota.h"

void Pilota::pinta() {
   DrawCircle(x, y, 20, c);
}

void Pilota::mou() {
   x += vx;
   y += vy;
}

void Pilota::colisio() {
   if (x > 780) {
      x = 780;
      vx = -vx;
   }
   if (y > 580) {
      y = 580;
      vy = -vy;
   }
   if (x < 20) {
      x = 20;
      vx = -vx;
   }
   if (y < 20) {
      y = 20;
      vy = -vy;
   }
}

