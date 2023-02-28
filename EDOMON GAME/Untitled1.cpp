#include "raylib.h"
int main() {
   InitWindow(800, 600, "Practiques EDOO");
   SetTargetFPS(60);
   Texture2D tx=LoadTexture("Flori.png");

   while (!WindowShouldClose()){
       BeginDrawing();
   ClearBackground((Color){ 155, 193, 255, 255 });
    DrawTextureRec(tx, {0, 0, 69, 69}, {0, 600}, WHITE);
   EndDrawing();
   DrawTextureRec(tx, {0, 0, 69, 69}, {0, 200}, WHITE);
   DrawTextureRec(tx, {69, 0, 69, 69}, {0, 200}, WHITE);}

    CloseWindow();
       return 0;
}
