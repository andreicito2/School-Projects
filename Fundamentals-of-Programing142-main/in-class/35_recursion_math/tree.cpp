/*************************************************************************
 *
 * Exercise: Tree Structure
 *
 * File Name:   tree.cpp
 * Username:  	?
 * Username:  	?
 * Course:      CPTR 142
 *
 */

#include <iostream> // for std::cin and std::cout
#include <vector>

class Node {
public:
  Node() { this->value = rand() % 100; }
  int getValue() { return value; }
  void addLevels(int levels);
  void print(std::string indent);

private:
  int value;
  std::vector<Node *> children;
};

void Node::addLevels(int levels) {
  if (levels == 0) {
    return;
  }
  int childrenCount = rand() % 3; // allow zero to two children
  for (int i = 0; i <= childrenCount; ++i) {
    Node *child = new Node;
    child->addLevels(rand() % levels); //
    children.push_back(child);
  }
}

void Node::print(std::string indent) {
  // TODO: Print this node's value on a line and then print each child
  std::cout << indent <<this->getValue() << std::endl;
  for (int c= 0; c < children.size(); c++){
      children[c]->print(indent + "  ");
  }
}

int main() {
  // TODO: try with different random seeds
  srand(0);
  Node *root = new Node;
  root->addLevels(3);
  root->print("");
  return 0;
}
