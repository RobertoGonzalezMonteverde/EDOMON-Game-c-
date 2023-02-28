
class Plataforma {
   Rectangle _rec, _orig;
   Vector2 _click;
   bool _movent, _redimensionant;

   Rectangle _getButtonRec();

public:
   Plataforma(Rectangle rec);
   void pinta(bool mode_edicio);

   float getY() { return _rec.y; } // m�tode inline (nom�s per m�todes curts)
   Rectangle getRec() { return _rec; }

   // a_sobre: per saber si un rectangle est� a sobre la plataforma

   // M�todes "sobrecarregats" (tenen el mateix nom per� par�metres diferents)
   bool a_sobre(Vector2 p);
   bool a_sobre(Rectangle R);

   bool colisio(Rectangle R); // colisio amb un rectangle
   void edita();
};

