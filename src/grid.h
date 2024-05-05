#ifndef GRID_H
#define GRID_H

#include <raylib.h>

#include <vector>

class Grid {
 public:
  Grid(int numRows = 20, int numCols = 12, int cellSize = 30);
  void Initialize();
  void Print();
  void Draw();
  int grid[21][12];

 private:
  int numCols;
  int numRows;
  int cellSize;
  Vector2 startOffset;
  std::vector<Color> colors;
};

#endif /* GRID_H */