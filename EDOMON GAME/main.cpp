#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "Animal.h"
#include "Atack.h"
#include "Bite.h"
#include "Bubble.h"
#include "Confution.h"
#include "Flames.h"
#include "Flowery.h"
#include "Kick.h"
#include "Leafs.h"
#include "raylib.h"
#include "Punch.h"
#include "Roarsours.h"
#include "Scratch.h"
#include "Snaflire.h"
#include "Tackle.h"
#include "Tentber.h"
#include "Water.h"
#include "Punt2D.h"

int main(){
InitWindow(300, 300, "EDOMON");
SetTargetFPS(7);
Texture2D base=LoadTexture("Plataforma.png");
Texture2D menu2=LoadTexture("Selección.png");
Texture2D vida=LoadTexture("vida.png");
Texture2D portada=LoadTexture("Portada.png");
Texture2D winwin=LoadTexture("Win.png");
Texture2D loselose=LoadTexture("Lose.png");
Texture2D ataques=LoadTexture("atacks.png");
vector <Animal*> animales;
 animales.push_back(new Snaflire());
 animales.push_back(new Roarsours());
 animales.push_back(new Flowery());
 animales.push_back(new Tentber());
 int i;
 int j;
 int o, s=0, r=1, l=0;
 int b=0;
 //Animal l;
 int resta;
 Punt2D estat, posi1, posi2, estat2; estat2.x=0; estat2.y=0; estat.x=192; estat.y=0; posi1.x=0; posi1.y=100; posi2.x=210; posi2.y=20;
 while (!WindowShouldClose()){
        while(l==0 && !WindowShouldClose())
        {  DrawTexture(portada, 0, 0, WHITE);
          DrawText("Enter-Empezar",36,140,30,BLACK);
          DrawText("Esc-Salir",80,200,30,BLACK);
          if (IsKeyPressed(KEY_ENTER)){s=1;r=0;}
          if (IsKeyPressed(KEY_ESCAPE)){s=2;}
        if(s==1){
        while (r==0 && !WindowShouldClose())
        {
            DrawTexture(menu2, 0, 0, WHITE);
            DrawText("Seleccione un personaje:",60,20,15,BLACK);
            DrawTextureRec(animales[0]->tx,{0,0,96,96}, {50, 50}, WHITE );
            DrawText("1.Snaflire", 40, 140, 20, BLACK);
            DrawTextureRec(animales[1]->tx, {0,0,96,96},{150, 50}, WHITE );
            DrawText("2.Roarsours", 146, 140, 20, BLACK);
            DrawTextureRec(animales[2]->tx, {0,0,96,96},{50, 160}, WHITE );
            DrawText("3.Flowery", 45, 250, 20, BLACK);
            DrawTextureRec(animales[3]->tx, {0,0,96,96},{150, 160}, WHITE );
            DrawText("4.Tentber", 155, 250, 20, BLACK);
            if (IsKeyPressed(KEY_ONE)){r=1; i=0; j=(0+(rand()%4));while(j==i){j=(0+(rand()%4));}}
            if (IsKeyPressed(KEY_TWO)){r=1; i=1; j=(0+(rand()%4)); while(j==i){j=(0+(rand()%4));}}
            if (IsKeyPressed(KEY_THREE)){r=1; i=2;  j=(0+(rand()%4));while(j==i){j=(0+(rand()%4));}}
            if (IsKeyPressed(KEY_FOUR)){r=1; i=3; j=(0+(rand()%4)); while(j==i){j=(0+(rand()%4));}}
            EndDrawing();
        }
        EndDrawing();
        while (animales[i]->vida>0 && animales[j]->vida>0 && !WindowShouldClose())
        {
        DrawTexture(base, 0, 0, WHITE);
        DrawTexture(ataques, 0, 0, WHITE);
        DrawTexture(vida, 0, 0, WHITE);
        Punt2D positext; positext.x=20; positext.y=220;
        animales[i]->showat();
        animales [j]->pinta (estat2, posi2);
        animales[i]->pinta(estat, posi1);
        animales[i]->showvida();
        animales[j]->showvida2();
        if(IsKeyPressed(KEY_ONE))
        {   o=0;
            animales[i]->cambia_pose_avant(posi1);
            animales[i]->atac(o, resta, estat, posi2);
            animales[j]->reception(resta);
            animales[i]->cambia_pose_enr(posi1);
            if(animales[j]->vida>0)
            {o=(0+(rand()%4));
            animales[j]->cambia_pose_avant(posi2);
            animales[j]->atac(o, resta, estat2, posi1);
            animales[i]->reception(resta);
            animales[j]->cambia_pose_enr(posi2);}
            EndDrawing();
        }
         if(IsKeyPressed(KEY_TWO))
        {   o=1;
            animales[i]->cambia_pose_avant(posi1);
            animales[i]->atac(o, resta, estat, posi2);
            animales[j]->reception(resta);
            animales[i]->cambia_pose_enr(posi1);
            if(animales[j]->vida>0)
            {o=(0+(rand()%4));
            animales[j]->cambia_pose_avant(posi2);
            animales[j]->atac(o, resta, estat2, posi1);
            animales[i]->reception(resta);
            animales[j]->cambia_pose_enr(posi2);}
            EndDrawing();
        }
         if(IsKeyPressed(KEY_THREE))
        {   o=2;
            animales[i]->cambia_pose_avant(posi1);
            animales[i]->atac(o, resta, estat, posi2);
            animales[j]->reception(resta);
            animales[i]->cambia_pose_enr(posi1);
            if(animales[j]->vida>0)
            {o=(0+(rand()%4));
            animales[j]->cambia_pose_avant(posi2);
            animales[j]->atac(o, resta, estat2, posi1);
            animales[i]->reception(resta);
            animales[j]->cambia_pose_enr(posi2);}
            EndDrawing();
        }
         if(IsKeyPressed(KEY_FOUR))
        {   o=3;
            animales[i]->cambia_pose_avant(posi1);
            animales[i]->atac(o, resta, estat, posi2);
            animales[j]->reception(resta);
            animales[i]->cambia_pose_enr(posi1);
            if(animales[j]->vida>0)
            {o=(0+(rand()%4));
            animales[j]->cambia_pose_avant(posi2);
            animales[j]->atac(o, resta, estat2, posi1);
            animales[i]->reception(resta);
            animales[j]->cambia_pose_enr(posi2);}
            EndDrawing();
        }
        else{
        animales[j]->cambia_pose(estat2);
        animales[i]->cambia_pose(estat);
        }

        EndDrawing();
        }
        if((animales[i]->vida)<=0)
        {
             while(!IsKeyPressed(KEY_ONE) && !WindowShouldClose()){
            DrawTexture(loselose, 0, 0, WHITE);
            animales[i]->lose();
            DrawText("Press '1' to continue",95,200,10,BLACK);
            animales[i]->vida=300;
            //animales[i]->vidacontrincant=300;//
            animales[j]->vida=300;
            //animales[j]->vidacontrincant=300;//
            EndDrawing();}
            EndDrawing();
        }
        else if(animales[j]->vida<=0)
        {
             while(!IsKeyPressed(KEY_ONE) && !WindowShouldClose())
        {
            DrawTexture(winwin, 0, 0, WHITE);
            animales[i]->wins();
            DrawText("Press '1' to continue",95,200,10,BLACK);
            animales[j]->vida=300;
            //animales[j]->vidacontrincant=300;
            animales[i]->vida=300;
            //animales[i]->vidacontrincant=300;//
            EndDrawing();
        }
        }
        EndDrawing();
        s=0;
        }
        else if(s==2)
        {
            l=1;
        }

EndDrawing();
 }
  CloseWindow();
       return 0;
 }
 CloseWindow();
       return 0;

}

