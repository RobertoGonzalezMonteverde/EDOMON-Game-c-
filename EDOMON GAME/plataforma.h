
class Plataforma {
   Rectangle _rec, _orig;
   Vector2 _click;
   bool _movent, _redimensionant;

   Rectangle _getButtonRec();

public:
   Plataforma(Rectangle rec);
   void pinta(bool mode_edicio);

   float getY() { return _rec.y; } // mètode inline (només per mètodes curts)
   Rectangle getRec() { return _rec; }

   // a_sobre: per saber si un rectangle està a sobre la plataforma

   // Mètodes "sobrecarregats" (tenen el mateix nom però paràmetres diferents)
   bool a_sobre(Vector2 p);
   bool a_sobre(Rectangle R);

   bool colisio(Rectangle R); // colisio amb un rectangle
   void edita();
};

