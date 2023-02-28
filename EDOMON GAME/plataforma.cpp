
#include "raylib.h"
#include "plataforma.h"

Plataforma::Plataforma(Rectangle rec) {
   _rec = rec;
   _movent = false;
}

Rectangle Plataforma::_getButtonRec() {
   Vector2 bottom_right = {
      _rec.x + _rec.width  - 10,
      _rec.y + _rec.height - 10
   };
   return { bottom_right.x, bottom_right.y, 10, 10 };
}

void Plataforma::pinta(bool mode_edicio) {
   DrawRectangleRec(_rec, BROWN);
   if (mode_edicio) {
      Vector2 mouse = GetMousePosition();
      if (CheckCollisionPointRec(mouse, _rec)) {
         DrawRectangleLines(_rec.x, _rec.y, _rec.width, _rec.height, YELLOW);
      }
      Rectangle boto = _getButtonRec();
      DrawRectangleRec(boto, {255, 255, 0, 128});
   }
}

bool Plataforma::colisio(Rectangle R) {
   return CheckCollisionRecs(R, _rec);
}

bool Plataforma::a_sobre(Vector2 p) {
   return (p.x >= _rec.x && p.x <= (_rec.x + _rec.width) && p.y <= _rec.y);
}

bool Plataforma::a_sobre(Rectangle R) {
   Vector2 base1 = { R.x,           R.y + R.height };
   Vector2 base2 = { R.x + R.width, R.y + R.height };
   return a_sobre(base1) || a_sobre(base2);
}

void Plataforma::edita() {
   Vector2 mouse = GetMousePosition();
   bool a_dins = CheckCollisionPointRec(mouse, _rec);

   if (!_movent) {
      if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && a_dins) {
         _orig = _rec;
         _click = mouse;
         _movent = true;
         Rectangle boto = _getButtonRec();
         if (CheckCollisionPointRec(mouse, boto)) {
            _redimensionant = true;
         } else {
            _redimensionant = false;
         }
      }
   } else {
      // S'esta movent (arrossegant)
      if (_redimensionant) {
         _rec.width  = _orig.width  + (mouse.x - _click.x);
         _rec.height = _orig.height + (mouse.y - _click.y);
      } else {
         _rec.x = _orig.x + (mouse.x - _click.x);
         _rec.y = _orig.y + (mouse.y - _click.y);
      }
      if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
         _movent = false;
      }
   }
}











