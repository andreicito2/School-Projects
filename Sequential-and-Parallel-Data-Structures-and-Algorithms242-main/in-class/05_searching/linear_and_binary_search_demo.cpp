/**
 * Zybooks search example.
 */
#include <iostream>

int LinearSearch(int *numbers, int numbersSize, int key, int &comparisons) {
  // Added parameter to hold total number of comparisons.
  comparisons = 0;

  for (int i = 0; i < numbersSize; i++) {
    comparisons++;
    if (numbers[i] == key) {
      return i;
    }
  }
  return -1; // not found
}

int BinarySearch(int *numbers, int numbersSize, int key, int &comparisons) {
  // Added parameter to hold total number of comparisons.
  comparisons = 0;

  // Variables to hold the low and high indices of the area being searched.
  // Starts with entire range.
  int low = 0;
  int high = numbersSize - 1;

  // Loop until "low" passes "high"
  while (high >= low) {
    // Calculate the middle index
    int mid = (high + low) / 2;

    // Cut the range to either the left or right half,
    // unless numbers[mid] is the key
    comparisons++;
    if (numbers[mid] < key) {
      low = mid + 1;
    } else if (numbers[mid] > key) {
      high = mid - 1;
    } else {
      return mid;
    }
  }

  return -1; // not found
}

// Main program to test both search functions
int main() {
  // TODO Alter the search space numbers here with your randomly generated set
  int numbers[] = {9,13,16,23,43,51,53,63,70,82,85,90,99,105,126,141,156,157,165,188,239,244,245,248,269,288,289,302,304,315,321,334,345,347,369,407,407,416,418,440,452,460,465,477,479,483,485,500,510,513,514,517,517,530,541,550,554,565,566,571,576,587,592,593,597,603,623,633,633,642,645,650,660,686,687,703,703,729,734,743,749,755,757,779,808,812,812,817,832,835,861,862,877,910,939,955,959,962,984,994};

  int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
  std::cout << "NUMBERS: [" << numbers[0];
  for (int i = 1; i < numbersSize; i++) {
    std::cout << ", " << numbers[i];
  }
  std::cout << "]" << std::endl;

  // Prompt for an integer to search for
  std::cout << "Enter an integer value: ";
  int key = 0;
  std::cin >> key;
  std::cout << std::endl;

  int comparisons = 0;
  int keyIndex = LinearSearch(numbers, numbersSize, key, comparisons);
  if (keyIndex == -1) {
    std::cout << "Linear search: " << key << " was not found with ";
    std::cout << comparisons << " comparisons." << std::endl;
  } else {
    std::cout << "Linear search: Found " << key << " at index " << keyIndex;
    std::cout << " with " << comparisons << " comparisons." << std::endl;
  }

  keyIndex = BinarySearch(numbers, numbersSize, key, comparisons);
  if (keyIndex == -1) {
    std::cout << "Binary search: " << key << " was not found with ";
    std::cout << comparisons << " comparisons." << std::endl;
  } else {
    std::cout << "Binary search: Found " << key << " at index " << keyIndex;
    std::cout << " with " << comparisons << " comparisons." << std::endl;
  }
}
