#ifndef BLOCK_H
#define BLOCK_H

#include <raylib.h>

#include <map>
#include <vector>

class Block {
 public:
  inline Block(int cellSize = 30, int rotationState = 0) {
    this->cellSize = cellSize;
    this->rotationState = rotationState;
  };
  virtual void Draw() = 0;
  int id;
  std::map<int, std::vector<Vector2>> cells;

 private:
  int cellSize;
  int rotationState;
};

#endif /* BLOCK_H */