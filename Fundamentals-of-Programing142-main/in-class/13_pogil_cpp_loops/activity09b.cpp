#include <iostream>
using namespace std;

int main() {

  int rows = 8, cols = 10;
   //int i = 0;

  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}