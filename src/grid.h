#ifndef GRID_H
#define GRID_H

class Grid
{
public:
    Grid(int numRows = 20, int numCols = 10, int cellSize = 30);
    void Initialize();
    void Print();
    int grid[20][10];

private:
    int numCols;
    int numRows;
    int cellSize;
};

#endif /* GRID_H */