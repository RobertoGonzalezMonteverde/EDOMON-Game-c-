using namespace std;
#ifndef Animal_H_


#define Animal_H_

#include "Punt2D.h"
#include "raylib.h"
#include <vector>
#include <string>
class Atack;

class Animal
{
public:
std::string nom,v;
int vida, lado;//vidacontrincant;
int vida_inicial;
Punt2D pos, img;

Texture2D tx;
vector<string> atacs;
vector<Atack*>atacks;
    Animal();//constructor
    virtual void pinta(Punt2D uno, Punt2D dos);
    virtual void atac(int i, int& resta_, Punt2D uno, Punt2D dos);//metodes virtual atac
    virtual void reception(int menos);
    void wins();
    void lose();
    virtual void cambia_pose(Punt2D& pos);
    virtual void cambia_pose_avant(Punt2D& pos);
    virtual void cambia_pose_enr(Punt2D& pos);
    virtual void showat();//metode virtual mostra llista atacs de cada personatge
    virtual void showvida();
    virtual void showvida2();
};

#endif








