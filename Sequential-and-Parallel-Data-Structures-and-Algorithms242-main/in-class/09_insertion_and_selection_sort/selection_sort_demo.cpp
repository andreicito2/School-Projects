#include <iostream>
#include <string>

void SelectionSort(int *numbers, int numbersSize) {
  for (int i = 0; i < numbersSize - 1; i++) {
    // Find index of smallest remaining element
    int indexSmallest = i;
    for (int j = i + 1; j < numbersSize; j++) {
      if (numbers[j] < numbers[indexSmallest]) {
        indexSmallest = j;
      }
    }

    // Swap numbers[i] and numbers[indexSmallest]
    int temp = numbers[i];
    numbers[i] = numbers[indexSmallest];
    numbers[indexSmallest] = temp;
  }
}

std::string ArrayToString(int *array, int arraySize) {
  // Special case for empty array
  if (0 == arraySize) {
    return std::string("[]");
  }

  // Start the string with the opening '[' and element 0
  std::string result = "[" + std::to_string(array[0]);

  // For each remaining element, append comma, space, and element
  for (int i = 1; i < arraySize; i++) {
    result += ", ";
    result += std::to_string(array[i]);
  }

  // Add closing ']' and return result
  result += "]";
  return result;
}

int main() {
  // Create an array of numbers to sort
  int numbers[] = {10, 2,7, 78, 4, 45, 32, 7, 11};
  int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

  // Display the contents of the array
  std::cout << "UNSORTED: " << ArrayToString(numbers, numbersSize) << std::endl;

  // Call the SelectionSort function
  SelectionSort(numbers, numbersSize);

  // Display the sorted contents of the array
  std::cout << "SORTED:   " << ArrayToString(numbers, numbersSize) << std::endl;
}