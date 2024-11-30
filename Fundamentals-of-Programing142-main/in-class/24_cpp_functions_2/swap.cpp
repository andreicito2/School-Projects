#include <iostream>

void swap(int first, int second) {
  int temp = first;
  first = second;
  second = temp;
}

void swapAnd(int &first, int &second) {
  int temp = first;
  first = second;
  second = temp;
}

int main() {
  int x = 6, y = 7;
  swap(x, y);
  std::cout << "x = " << x << ", y = " << y << std::endl;
  swapAnd(x,y);
  std::cout << "x = " << x << ", y = " << y << std::endl;
}
