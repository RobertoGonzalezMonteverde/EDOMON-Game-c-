
class Mario {
   // camps privats
   Vector2 _pos, _upos;  // posició i última posició
   Vector2 _vel;  // velocitat
   Plataforma *_plataforma; // A quina plataforma estem (o nullptr si no)
   bool _lateral; // el Mario es mou lateralment

   Texture2D _tx, _tx_dreta, _tx_esquerra; // Textures
   int _pose, _temps_pose;

   void canvia_pose();

public:
   Mario(float x, float y);
   void pinta();
   void mou();
   void colisio(std::vector<Plataforma*>& Ps); // Comprova que el Mario xoca o cau
   bool a_terra() { return _plataforma != nullptr; }
};
