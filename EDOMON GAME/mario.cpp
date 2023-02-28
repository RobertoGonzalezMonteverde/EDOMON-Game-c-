
#include <vector>
#include "raylib.h"
#include "plataforma.h"
#include "mario.h"
using namespace std;

Mario::Mario(float x, float y) {
   _plataforma = nullptr;
   _pos = {x, y};
   _vel = {0, 0};
   _tx_dreta    = LoadTexture("mario_d.png");
   _tx_esquerra = LoadTexture("mario_e.png");
   _tx          = _tx_dreta;
   _pose = 0;
   _temps_pose = 0;
}

void Mario::pinta() {
   Vector2 p = { _pos.x, _pos.y - 34 };
   // DrawRectangleV(p, tam, RED);
   DrawTextureRec(_tx, {_pose*34, 0, 34, 34}, p, WHITE);
}

void Mario::mou() {
   _upos = _pos; // Guardem la última posició bona
   _lateral = false;
   if (IsKeyDown(KEY_RIGHT)) {
      _pos.x += 5;
      _tx = _tx_dreta;
      _lateral = true;
   } else if (IsKeyDown(KEY_LEFT)) {
      _pos.x -= 5;
      _tx = _tx_esquerra;
      _lateral = true;
   }
   if (a_terra() && IsKeyPressed(KEY_SPACE)) {
      _plataforma = nullptr;
      _vel.y = -17;
   }
   if (!a_terra()) {
      _pos.x += _vel.x;
      _pos.y += _vel.y;
      _vel.y += 1.0;
   }
   canvia_pose();
}

void Mario::colisio(vector<Plataforma*>& Ps) {
   Rectangle rec_anterior = { _upos.x, _upos.y - 34, 34, 34 };
   Rectangle rec_actual   = { _pos.x,  _pos.y  - 34, 34, 34 };
   if (a_terra()) {
      // Mirem si perdem peu (caiem)
      if (!_plataforma->a_sobre(rec_actual)) {
         _plataforma = nullptr;
      }
   }
   else {
      // Mirem si aterrem a la plataforma
      int i = 0;
      while (i < Ps.size() && _plataforma == nullptr) {
         if (Ps[i]->a_sobre(rec_anterior) && Ps[i]->colisio(rec_actual)) {
            _plataforma = Ps[i];
         }
         else {
            i++;
         }
      }
      if (_plataforma != nullptr) {
         _pos.y = _plataforma->getY();
         _vel = {0, 0};
      }
   }

   // Cercar plataforma amb la que colisionem (excepte la nostra)
   Plataforma* Pcoli = nullptr;
   int i = 0;
   while (i < Ps.size() && Pcoli == nullptr) {
      if (Ps[i] != _plataforma && Ps[i]->colisio(rec_actual)) {
         Pcoli = Ps[i];
      } else {
         i++;
      }
   }
   if (Pcoli != nullptr) {
      _pos = _upos;
      _vel = {0, 0};
   }
}

void Mario::canvia_pose() {
   if (!a_terra()) {
      _pose = 5;
   } else if (!_lateral) {
      _pose = 0;
   } else { // _a_terra == true && _lateral == true
      _temps_pose++;
      if (_temps_pose > 2) {
         _pose++;
         if (_pose > 3) {
            _pose = 1;
         }
         _temps_pose = 0;
      }
   }
}








