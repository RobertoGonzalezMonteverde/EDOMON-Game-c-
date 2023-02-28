
#ifndef Atack_H_

#include "raylib.h"
#include <cstdlib>
#define Atack_H_
#include <string>
#include "Punt2D.h"


class Atack{
protected:
int damage, out;
Punt2D pos;
Texture2D tx;
public:
std::string nom;
Atack();
virtual void show_damage(Punt2D uno, Punt2D dos, int& resta);
};

#endif
