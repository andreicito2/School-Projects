/**
 * TODO-1: rewrite to avoid segmentation fault (allocate from heap, not stack)
 * TODO-2: free memory when done (should see call to deconstructor)
 */

#include <iostream>

class Person {
public:
  Person() {
    std::cout << "--Called Person::Person()" << std::endl;
    this->name = "John Doe";
  }
  Person(std::string name) {
    std::cout << "--Called Person::Person(\"" << name << "\")" << std::endl;
    this->name = name;
  }
  ~Person() { 
      
      std::cout << "--Called Person::~Person()" << std::endl; }
  std::string getName() { return name; }

private:
  std::string name;
};

Person *teacher() {
  // allocate a stack-based object (object is deleted at end of function)
  Person *foster = new Person("Professor Foster");
  // return a pointer to the (soon-to-be deleted) object
  return foster; // pointer is useless
}

int main() {
  Person *pPerson = teacher();
  std::cout << "Hello, " << pPerson->getName() << '!' << std::endl;
  delete pPerson;
  pPerson = nullptr;
  return 0;
}
