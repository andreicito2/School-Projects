#include <ctime>
#include <iostream>

// class for a die
class Die {
public:
  Die() { this->face = 1; }
  int getFace() const { return this->face; }
  int roll() {
    this->face = rand() % 6 + 1;
    return this->face;
  }

private:
  int face;
};

int main() {

  // seed the random number generator
  srand(time(NULL));
 
  Die pinkFuzzy;

  // roll the die five times
  pinkFuzzy.getFace();
  for (int i = 0; i < 5; i++) {
    std::cout << "Face is: " << pinkFuzzy.roll() << std::endl;
  }
}