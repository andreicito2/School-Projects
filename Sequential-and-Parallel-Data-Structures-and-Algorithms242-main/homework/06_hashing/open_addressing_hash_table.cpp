/**
 * Assignment 6: Open Addressing Hash Table implementation
 */
#include "open_addressing_hash_table.h"
#include "hash_table.h"
#include "open_addressing_bucket.h"
#include <vector>

// OpenAddressingHashTable is an abstract base class for an open addressing hash
// table

// Returns the bucket index for the specified key and i value using the
// linear probing sequence.
int OpenAddressingHashTable::probe(const std::string &key, int i) const {
  return (this->hash(key) + i) % this->table.size();
}

OpenAddressingHashTable::OpenAddressingHashTable(int initialCapacity) {
  table.resize(initialCapacity,
               &OpenAddressingBucket<std::string, ItemType>::EMPTY_SINCE_START);
}

OpenAddressingHashTable::~OpenAddressingHashTable() {
  // Free all non-empty buckets
  for (long unsigned int i = 0; i < table.size(); i++) {
    if (!table[i]->isEmpty()) {
      // Deleting the bucket calls OpenAddressingBucket's destructor,
      // which deallocates the bucket's key and value.
      delete table[i];
    }
  }
}

// Inserts the specified key/value pair. If the key already exists, the
// corresponding value is updated. If inserted or updated, true is returned.
// If not inserted, then false is returned.
bool OpenAddressingHashTable::insert(const std::string &key,
                                     const ItemType &value) {
  // First search for the key in the table. If found, update bucket's value.
  for (long unsigned int i = 0; i < table.size(); i++) {
    int bucketIndex = probe(key, i);

    // An empty-since-start bucket implies the key is not in the table
    if (table[bucketIndex] ==
        &OpenAddressingBucket<std::string, ItemType>::EMPTY_SINCE_START) {
      break;
    }

    if (table[bucketIndex] !=
        &OpenAddressingBucket<std::string, ItemType>::EMPTY_AFTER_REMOVAL) {
      // Check if the non-empty bucket has the key
      if (key == *table[bucketIndex]->key) {
        // Update the value
        delete table[bucketIndex]->value;
        table[bucketIndex]->value = new ItemType(value);
        return true;
      }
    }
  }

  // The key is not in the table, so insert into first empty bucket
  for (long unsigned int i = 0; i < table.size(); i++) {
    int bucketIndex = probe(key, i);
    if (table[bucketIndex]->isEmpty()) {
      table[bucketIndex] =
          new OpenAddressingBucket<std::string, ItemType>(key, value);
      return true;
    }
  }

  return false; // no empty bucket found
}

// Searches for the specified key. If found, the key/value pair is removed
// from the hash table and true is returned. If not found, false is returned.
bool OpenAddressingHashTable::remove(const std::string &key) {
  for (long unsigned int i = 0; i < table.size(); i++) {
    int bucketIndex = probe(key, i);

    // An empty-since-start bucket implies the key is not in the table
    if (table[bucketIndex] ==
        &OpenAddressingBucket<std::string, ItemType>::EMPTY_SINCE_START) {
      return false;
    }

    if (table[bucketIndex] !=
        &OpenAddressingBucket<std::string, ItemType>::EMPTY_AFTER_REMOVAL) {
      // Check if the non-empty bucket has the key
      if (key == *table[bucketIndex]->key) {
        // Remove by deleting and setting the bucket to empty-after-removal
        delete table[bucketIndex];
        table[bucketIndex] =
            &OpenAddressingBucket<std::string, ItemType>::EMPTY_AFTER_REMOVAL;
        return true;
      }
    }
  }

  return false; // key not found
}

// Searches for the key, returning the corresponding value if found, null if
// not found.
ItemType *OpenAddressingHashTable::search(const std::string &key) const {
  for (long unsigned int i = 0; i < table.size(); i++) {
    int bucketIndex = probe(key, i);

    // An empty-since-start bucket implies the key is not in the table
    if (table[bucketIndex] ==
        &OpenAddressingBucket<std::string, ItemType>::EMPTY_SINCE_START) {
      return nullptr;
    }

    if (table[bucketIndex] !=
        &OpenAddressingBucket<std::string, ItemType>::EMPTY_AFTER_REMOVAL) {
      // Check if the non-empty bucket has the key
      if (key == *table[bucketIndex]->key) {
        return table[bucketIndex]->value;
      }
    }
  }

  return nullptr; // key not found
}

void OpenAddressingHashTable::printTable(std::ostream &printStream) const {
  for (long unsigned int i = 0; i < table.size(); i++) {
    printStream << i << ": ";
    if (table[i] ==
        &OpenAddressingBucket<std::string, ItemType>::EMPTY_SINCE_START) {
      printStream << "EMPTY_SINCE_START" << std::endl;
    } else if (table[i] ==
               &OpenAddressingBucket<std::string,
                                     ItemType>::EMPTY_AFTER_REMOVAL) {
      printStream << "EMPTY_AFTER_REMOVAL" << std::endl;
    } else {
      printStream << *table[i]->key << ", ";
      printStream << *table[i]->value << std::endl;
    }
  }
}
