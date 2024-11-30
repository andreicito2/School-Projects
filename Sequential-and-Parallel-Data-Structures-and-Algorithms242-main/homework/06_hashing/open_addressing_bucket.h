/**
* Assignment 6: Open Addressing Bucket header file
*/
#pragma once

#include "item_type.h"
#include <string>

// OpenAddressingBucket represents a bucket with a key and a value.
template <typename K, typename V> struct OpenAddressingBucket {
  K *key;
  V *value;

  OpenAddressingBucket() {
    key = nullptr;
    value = nullptr;
  }

  OpenAddressingBucket(const K &bucketKey, const V &bucketValue) {
    key = new K(bucketKey);
    value = new V(bucketValue);
  }

  virtual ~OpenAddressingBucket() {
    if (key) {
      delete key;
    }
    if (value) {
      delete value;
    }
  }

  // Two special bucket types exist: empty since start and empty after removal
  inline static OpenAddressingBucket<K, V> EMPTY_SINCE_START;
  inline static OpenAddressingBucket<K, V> EMPTY_AFTER_REMOVAL;

  bool isEmpty() const {
    return this == &EMPTY_SINCE_START || this == &EMPTY_AFTER_REMOVAL;
  }
};
