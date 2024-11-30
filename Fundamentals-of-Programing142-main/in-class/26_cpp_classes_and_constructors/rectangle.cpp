#include <iostream>

class Rectangle {
public:
    Rectangle();
    // Create a constructor with length and width parameters
    int Area(int length, int width);
    // Create a constructor with length, width, and symbol parameters
    int Area_2(int length, int width, std::string symbol);
    int setSize(int l, int w);
    int getArea();
    void drawRectangle(std::string symbol);
private:
    double length;
    double width;
    std::string symbol;
};

Rectangle::Rectangle() {
    length = 1;
    width = 1;
}

int Rectangle::setSize(int l, int w) {
    // Write code to set the length and width with the user's inputs
    length = l;
    width = w;
}

int Rectangle::getArea() {
    return length * width;
}

void Rectangle::drawRectangle(std::string symbol) {
    // Write code for drawing the rectangle
    for (int i; i < length; i++){
        for (int j; j < width; j++){
            std::cout << symbol;
        }
        std::cout << std::endl;
    }
}

int main() {

    Rectangle rect;
    std::cout << "The rectangle area is " << rect.getArea() << "." << std::endl;

    // Get user input for length, width, and symbol.
int l, w;
std::string sym;
  std::cout << "Enter length: ";
  std::cin >> l;
  std::cout << "Enter Width: ";
  std::cin >> w;
  std::cout << "Enter symbol: ";
  std::cin >> sym;
  

rect.setSize(l, w);
    // Call a constructor using the user's length and width specifications.

    // Print the rectangle using the user's length, width, and symbol specifications.
rect.drawRectangle(sym);
    return 0;
}
