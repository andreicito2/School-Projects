/**
 * Assignment 6: Hashing
 */
#include "item_type.h"
#include "open_addressing_bucket.h"
#include "open_addressing_hash_table.h"
#include <vector>
// LOOK AT 6.8
void OpenAddressingHashTable::resizeTable(int size) {
  // Your code goes here.
  std::vector<std::string> newkey;
  std::vector<ItemType> TempVector;
  // OpenAddressingHashTable TempHash(size);
  for (unsigned int i = 0; i < table.size(); i++) {
    if (table[i] !=
            &OpenAddressingBucket<std::string, ItemType>::EMPTY_SINCE_START &&
        table[i] !=
            &OpenAddressingBucket<std::string, ItemType>::EMPTY_AFTER_REMOVAL) {
      newkey.push_back(*table[i]->key);
      TempVector.push_back(*table[i]->value);
    }
  }

  //   for (unsigned int i = 0; i < table.size(); i++) {
  //     table[i] = &OpenAddressingBucket<std::string,
  //     ItemType>::EMPTY_SINCE_START;
  //   }
  table.clear();
  table.resize(size,
               &OpenAddressingBucket<std::string, ItemType>::EMPTY_SINCE_START);

  for (int i = 0; i < newkey.size(); i++) {
    this->insert(newkey.at(i), TempVector.at(i));
  }

  // You have to determin how much to resize the table and re hash under sertain
  // sircumsatances
}
