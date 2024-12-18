/*************************************************************************
 *
 * Project 3: bst header
 *
 * File Name: bst.h
 * Course:    CPTR 242
 * Date:      May 24, 2021
 */
// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// This file includes all of the pieces of the BST implementation

// Include the node implementation
#pragma once
#include "BSTElement.h"
#include <string>

// Include the dictionary ADT

// Binary Search Tree implementation for the Dictionary ADT
template <typename Key, typename E> class BST {
private:
  bridges::BSTElement<Key, E> *root; // Root of the BST
  int nodecount;                     // Number of nodes in the BST

  // Private "helper" functions
  void clearhelp(bridges::BSTElement<Key, E> *);
  bridges::BSTElement<Key, E> *inserthelp(bridges::BSTElement<Key, E> *,
                                          const Key &, const E &, const std::string);
  bridges::BSTElement<Key, E> *deletemin(bridges::BSTElement<Key, E> *);
  bridges::BSTElement<Key, E> *getmin(bridges::BSTElement<Key, E> *);
  bridges::BSTElement<Key, E> *removehelp(bridges::BSTElement<Key, E> *,
                                          const Key &);
  bridges::BSTElement<Key, E> *findhelp(bridges::BSTElement<Key, E> *,
                                        const Key &) const;
  void printhelp(bridges::BSTElement<Key, E> *, int) const;

public:
  BST() {
    root = NULL; // Constructor
    nodecount = 0;
  }
  ~BST() {
    clearhelp(root); // Destructor
  }

  void clear() { // Reinitialize tree
    clearhelp(root);
    root = NULL;
    nodecount = 0;
  }

  bridges::BSTElement<Key, E> *getRoot() { return root; }

  // Insert a record into the tree.
  // k Key value of the record.
  // e The record to insert.
  void insert(const Key &k, const E &e, const std::string l) {
    root = inserthelp(root, k, e, l);
    nodecount++;
  }

  // Remove a record from the tree.
  // k Key value of record to remove.
  // Return: The record removed, or NULL if there is none.
  bridges::BSTElement<Key, E> *remove(const Key &k) {
    bridges::BSTElement<Key, E> *temp = findhelp(root, k); // First find it
    if (temp != NULL) {
      root = removehelp(root, k);
      nodecount--;
    }
    return temp;
  }

  // Remove and return the root node from the dictionary.
  // Return: The record removed, null if tree is empty.
  E removeAny() { // Delete min value
    if (root != NULL) {
      E temp = root->getValue();
      root = removehelp(root, root->getKey());
      nodecount--;
      return temp;
    } else
      return NULL;
  }

  // Return Record with key value k, NULL if none exist.
  // k: The key value to find. */
  // Return some record matching "k".
  // Return true if such exists, false otherwise. If
  // multiple records match "k", return an arbitrary one.
  bridges::BSTElement<Key, E> *find(const Key &k) const {
    return findhelp(root, k);
  }

  // Return the number of records in the dictionary.
  int size() { return nodecount; }

  void print() const { // Print the contents of the BST
    if (root == NULL)
      std::cout << "The BST is empty.\n";
    else
      printhelp(root, 0);
  }
};

// Clean up BST by releasing space back free store
template <typename Key, typename E>
void BST<Key, E>::clearhelp(bridges::BSTElement<Key, E> *root) {
  if (root == NULL) {
    return;
  }
  clearhelp(root->getLeft());
  clearhelp(root->getRight());
  delete root;
}

// Insert a node into the BST, returning the updated tree
template <typename Key, typename E>
bridges::BSTElement<Key, E> *
BST<Key, E>::inserthelp(bridges::BSTElement<Key, E> *root, const Key &k,
                        const E &it, const std::string l) {
  if (root == NULL) { // Empty tree: create node
    return new bridges::BSTElement<Key, E>(k, it, l);
  }
  if (k < root->getKey()) {
    root->setLeft(inserthelp(root->getLeft(), k, it, l));
  } else {
    root->setRight(inserthelp(root->getRight(), k, it, l));
  }
  return root; // Return tree with node inserted
}

// Delete the minimum value from the BST, returning the revised BST
template <typename Key, typename E>
bridges::BSTElement<Key, E> *
BST<Key, E>::getmin(bridges::BSTElement<Key, E> *rt) {
  if (rt->getLeft() == NULL) {
    return rt;
  } else {
    return getmin(rt->getLeft());
  }
}

template <typename Key, typename E>
bridges::BSTElement<Key, E> *
BST<Key, E>::deletemin(bridges::BSTElement<Key, E> *rt) {
  if (rt->getLeft() == NULL) { // Found min
    return rt->getRight();
  } else { // Continue left
    rt->setLeft(deletemin(rt->getLeft()));
    return rt;
  }
}

// Remove a node with key value k
// Return: The tree with the node removed
template <typename Key, typename E>
bridges::BSTElement<Key, E> *
BST<Key, E>::removehelp(bridges::BSTElement<Key, E> *rt, const Key &k) {
  if (rt == NULL) {
    return NULL; // k is not in tree
  } else if (k < rt->getKey()) {
    rt->setLeft(removehelp(rt->getLeft(), k));
  } else if (k > rt->getKey()) {
    rt->setRight(removehelp(rt->getRight(), k));
  } else { // Found: remove it
    bridges::BSTElement<Key, E> *temp = rt;
    if (rt->getLeft() == NULL) { // Only a right child
      rt = rt->getRight();       //  so point to right
      delete temp;
    } else if (rt->getRight() == NULL) { // Only a left child
      rt = rt->getLeft();                //  so point to left
      delete temp;
    } else { // Both children are non-empty
      bridges::BSTElement<Key, E> *temp = getmin(rt->getRight());
      rt->setElement(temp->getValue());
      rt->setKey(temp->getKey());
      rt->setRight(deletemin(rt->getRight()));
      delete temp;
    }
  }
  return rt;
}

// Find a node with the given key value
template <typename Key, typename E>
bridges::BSTElement<Key, E> *
BST<Key, E>::findhelp(bridges::BSTElement<Key, E> *root, const Key &k) const {
  if (root == NULL) {
    return NULL; // Empty tree
  }
  if (k < root->getKey()) {
    return findhelp(root->getLeft(), k); // Check left
  } else if (k > root->getKey()) {
    return findhelp(root->getRight(), k); // Check right
  } else {
    return root; // Found it
  }
}

// Print out a BST
template <typename Key, typename E>
void BST<Key, E>::printhelp(bridges::BSTElement<Key, E> *root,
                            int level) const {
  if (root == NULL) {
    return; // Empty tree
  }
  printhelp(root->getLeft(), level + 1); // Do left subtree
  for (int i = 0; i < level; i++) {      // Indent to level
    std::cout << "  ";
  }
  std::cout << root->getKey() << "\n";    // Print node value
  printhelp(root->getRight(), level + 1); // Do right subtree
}
