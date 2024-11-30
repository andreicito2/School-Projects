/**
 * Draw shapes in a two demisional array
 */
#include "draw.h"
#include <cmath>
Draw::Draw() {
  // Your code goes here.
  for (int row = 0; row < ROW; row++) {
    for (int coll = 0; coll < COL; coll++) {
      board[row][coll] = ' ';
    }
  }
}

void Draw::drawPoint(int row, int col, char character) {
  // Your code goes here.
  board[row][col] = character;
}

void Draw::drawLine(int row, int col, int row2, int col2, char character) {
  // Your code goes here.
  // rise / run
  double slope;

  if (col2 - col != 0) {
    // horisontal or vertical lines
    slope = static_cast<double>(row2 - row) / static_cast<double>(col2 - col);
    double b = row - (slope * col);
    for (int i = col; i <= col2; i++) {
      int newrow = std::round(slope * i + b);
      board[newrow][i] = character;
    }
  } else {
    // diagonals
    for (int i = row; i <= row2; i++) {
      board[i][col] = character;
    }
  }
}

void Draw::drawRectangle(int row, int col, int row2, int col2, char character) {
  // Your code goes here.
  for (int i = row; i <= row2; i++) {
    for (int j = col; j <= col2; j++) {
      board[i][j] = character;
    }
  }
}

void Draw::drawFun() {
  // Your code goes here.
  board[3][3] = '*';
  board[3][6] = '*';
  board[5][3] = '*';
  board[5][6] = '*';
  board[6][4] = '*';
  board[6][5] = '*';
}

void Draw::resetVisualization() {
  // Your code goes here.

  for (int row = 0; row < ROW; row++) {
    for (int coll = 0; coll < COL; coll++) {
      board[row][coll] = ' ';
    }
  }
}
