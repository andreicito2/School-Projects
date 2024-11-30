#include <bits/stdc++.h>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;
void getNumber(bool &flag, int &num_num) {
  // int num_num;
  std::cout << "What is your integer value: ";
  std::cin >> num_num;

  // add checking function
  if (cin.fail()) {
    cin.clear();
    cin.ignore();
    cout << "You didn't enter an intager." << endl;
    flag = false;
    // return num_num;
  } else {
    // return num_num;
  }
}

void multiplier(int number1, int number2, vector<int> &sumer) {
  while (number2 > 1) {
    if ((number2 % 2) == 1) {
      sumer.push_back(number1);
    }
    number2 = number2 / 2;
    number1 = number1 + number1;
    cout << number1 << "," << number2 << endl;
    if ((number2 % 2) == 1) {
      sumer.push_back(number1);
    }
  }
  // sumer sorter
  sort(sumer.begin(), sumer.end());
  sumer.erase(unique(sumer.begin(), sumer.end()), sumer.end());
}