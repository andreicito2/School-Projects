#include <iostream>

class Rectangle {
public:
  Rectangle();
 
  // TODO Create a constructor with length and width parameters

  // TODO Create a constructor with length, width, and symbol parameters

  int getArea();
  void drawRectangle();

private:
  int length;
  int width;
  char symbol = '*';
};

Rectangle::Rectangle() {
  length = 1;
  width = 1;
}

// TODO Define the constructor with length and width parameters

// TODO Define the constructor with length, width, and symbol parameters

int Rectangle::getArea() { return length * width; }

void Rectangle::drawRectangle() {
  for (int l = 0; l < length; l++) {
    for (int w = 0; w < width; w++) {
      std::cout << symbol;
    }
    std::cout << std::endl;
  }
}

int main() {
  // With Default Constructor
  Rectangle rect;
  std::cout << "The rectangle area is " << rect.getArea() << "." << std::endl;
  rect.drawRectangle();

  // Get user input for length and width.
  int length, width;
  std::cout << "Rectangle length: ";
  std::cin >> length;
  std::cout << "Rectangle width: ";
  std::cin >> width;

  // TODO Call a constructor using the user's length and width.

  // Print the rectangle using the user's length and width specifications.
  std::cout << "The rectangle area is " << rect2.getArea() << "." << std::endl;
  rect2.drawRectangle();

  // Get user input for length, width, and symbol.
  char symbol;
  std::cout << "Rectangle length: ";
  std::cin >> length;
  std::cout << "Rectangle width: ";
  std::cin >> width;
  std::cout << "The symbol to draw with: ";
  std::cin >> symbol;

  // TODO Call a constructor using the user's length, width and sympol.

  // Print the rectangle using the user's length, width, and symbol
  // specifications.
  std::cout << "The rectangle area is " << rect3.getArea() << "." << std::endl;
  rect3.drawRectangle();

  return 0;
}
