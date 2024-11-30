#include <iostream>
#include <string>
using namespace std;

int main() {
int x;
  string name;
  cout << "Enter your name: ";
  cin >> name;

  for ( x = 0; x < 10; x ++ ) {
    cout << name << endl;
  }
  cout << "Nice to meet you!" << endl;
}
