/**
 * TODO: rewrite to avoid double free (replace existing pointer)
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
    pName = original.pName;
  }
  ~Person() {
    std::cout << "Called ~Person() on " << this << std::endl;
    delete pName;
    pName = nullptr;
  }
  std::string getName() { return *pName; }
  Person &operator=(const Person &original) {
    std::cout << "Called Person(const Person& original) on " << this
              << std::endl;
    if (this !=&original){
        delete pName;
        pName = new std::string(*original.pName);
    }

    return *this;
  }

private:
  std::string *pName;
};

void printPersonName(Person person) {
  std::cout << person.getName() << " on " << &person << std::endl;
}
// Person &operator=(const Person &original){
//     return new Person();
// }


int main() {
  Person teacher("Professor Foster");
  std::cout << "Teacher: " << teacher.getName() << std::endl;
  Person advisor = teacher;
  std::cout << "Advisor: " << advisor.getName() << std::endl;
  return 0;
}
