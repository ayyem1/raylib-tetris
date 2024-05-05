#include <raylib.h>

#include "grid.h"

int main() {
  const int screenWidth = 360;
  const int screenHeight = 640;

  InitWindow(screenWidth, screenHeight, "Tetris");
  SetTargetFPS(60);

  Grid grid = Grid();
  grid.Print();

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawFPS(10, 10);
    grid.Draw();
    EndDrawing();
  }

  CloseWindow();
  return 0;
}