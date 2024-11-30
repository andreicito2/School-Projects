/**
 * TODO: rewrite to avoid "null not valid" error (replace existing pointer)
 */

#include <iostream>

class Person {
public:
  Person() {
    std::cout << "Called Person() on " << this << std::endl;
    this->pName = new std::string("John Doe");
  }
  Person(std::string name) {
    std::cout << "Called Person(\"" << name << "\") on " << this << std::endl;
    this->pName = new std::string(name);
  }
  Person(const Person &original) {
    std::cout << "Called Person(const Person& original) on " << this
              << std::endl;
    pName = new std::string(*original.pName);
  }
  ~Person() {
    std::cout << "Called ~Person() on " << this << std::endl;
    delete pName;
    pName = nullptr;
  }
  std::string getName() { return *pName; }

private:
  std::string *pName;
};

void printPersonName(Person person) {
  std::cout << person.getName() << " on " << &person << std::endl;
}

void printAgain(Person &person) {
  int i = 0;
  printPersonName(person);
}

int main() {
  Person teacher("Professor Foster");
  std::cout << "First attempt: " << std::endl;
  printPersonName(teacher);
  std::cout << "Second attempt: " << std::endl;
  printAgain(teacher);
  return 0;
}
