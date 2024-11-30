/**
* Assignment 6: Open Addressing Hash Table header file
*/
#pragma once

#include "hash_table.h"
#include "open_addressing_bucket.h"
#include <vector>

// OpenAddressingHashTable is an abstract base class for an open addressing hash
// table
class OpenAddressingHashTable : public HashTable<std::string, ItemType> {
protected:
  std::vector<OpenAddressingBucket<std::string, ItemType>*> table;
  // Returns the bucket index for the specified key and i value using the
  // linear probing sequence.
  int probe(const std::string &key, int i) const ;

public:
  OpenAddressingHashTable(int initialCapacity);

  ~OpenAddressingHashTable();

  // Inserts the specified key/value pair. If the key already exists, the
  // corresponding value is updated. If inserted or updated, true is returned.
  // If not inserted, then false is returned.
  bool insert(const std::string &key, const ItemType &value) override;


  // Searches for the specified key. If found, the key/value pair is removed
  // from the hash table and true is returned. If not found, false is returned.
  bool remove(const std::string &key) override ;

  // Searches for the key, returning the corresponding value if found, null if
  // not found.
  ItemType *search(const std::string &key) const override ;

  void printTable(std::ostream &printStream) const override ;

  void resizeTable(int size);
};
