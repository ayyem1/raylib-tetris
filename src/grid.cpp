#include "grid.h"
#include <iostream>

Grid::Grid(int numRows, int numCols, int cellSize)
{
    this->numRows = numRows;
    this->numCols = numCols;
    this->cellSize = cellSize;

    Initialize();
}

void Grid::Initialize()
{
    for (int row = 0; row < this->numRows; row++)
    {
        for (int column = 0; column < this->numCols; column++)
        {
            grid[row][column] = 0;
        }
    }
}

void Grid::Print()
{
    for (int row = 0; row < this->numRows; row++)
    {
        for (int column = 0; column < this->numCols; column++)
        {
            std::cout << grid[row][column] << " ";
        }
        std::cout << std::endl;
    }
}
