#pragma once
#include "item_type.h"
#include "search_strategy.h"
#include <vector>

// File ItemType.h must be provided by the user of this class.
//  ItemType.h must contain the following definitions:
//  ItemType:      the definition of the objects on the list
//  RelationType:  {LESS, GREATER, EQUAL}
//  Member function ComparedTo(ItemType item) which returns
//       LESS, if self "comes before" item
//       GREATER, if self "comes after" item
//       EQUAL, if self and item are the same

class OptimizedLinearSearch : public SearchStrategy {
public:
  bool meetsRequirements(std::vector<ItemType> list);
  // Function: Meets requirements verifies the vector can support binary search.
  // Pre:     List has been initialized.
  // Post:    Returns true when binary search will properly work.

  int indexOf(std::vector<ItemType> list, ItemType key);
  // Function: Binary search a vector for key and count the number of
  // comparisons.
  // Pre:     List has been initialized.
  // Post:    Function location is non negative if the key exists and
  // comparisons has the number comparisons made during the search.
};
