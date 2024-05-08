
#include "grid.h"

#include <iostream>

#include "colors.h"

Grid::Grid(int numRows, int numCols, int cellSize) {
  this->numRows = numRows;
  this->numCols = numCols;
  this->cellSize = cellSize;
  this->startOffset = {0, 35};

  this->Initialize();
}

void Grid::Initialize() {
  for (int row = 0; row < this->numRows; row++) {
    for (int column = 0; column < this->numCols; column++) {
      grid[row][column] = 0;
    }
  }
}

void Grid::Print() {
  for (int row = 0; row < this->numRows; row++) {
    for (int column = 0; column < this->numCols; column++) {
      std::cout << grid[row][column] << " ";
    }
    std::cout << std::endl;
  }
}

void Grid::Draw() {
  for (int row = 0; row < this->numRows; row++) {
    for (int column = 0; column < this->numCols; column++) {
      int cellValue = this->grid[row][column];
      DrawRectangle(this->startOffset.x + (column * this->cellSize + 1),
                    this->startOffset.y + (row * this->cellSize + 1),
                    this->cellSize - 1, this->cellSize - 1,
                    ALL_COLORS[cellValue]);
    }
  }
}
