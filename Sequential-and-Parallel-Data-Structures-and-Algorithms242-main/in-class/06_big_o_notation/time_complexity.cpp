/**
 * In-class activity looking at the idea of Big O Notation.
 *
 * - Follow the instructions in the comments.
 *
 * Source: https://developerinsider.co/big-o-notation-explained-with-examples/
 */
#include <iostream>

/**
 * What is the Big O Notation?
 */
void printFirstElementOfArray(int arr[]) {
  std::cout << "First element of array = " << arr[0] << std::endl;
}

/**
 * What is the Big O Notation?
 */
void printAllElementOfArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << std::endl;
  }
}

/**
 * What is the Big O Notation?
 */
void printAllPossibleOrderedPairs(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      std::cout << arr[i] << " = " << arr[j] << std::endl;
    }
  }
}

/**
 * What is the Big O Notation?
 */
int fibonacci(int num) {
  if (num <= 1)
    return num;
  return fibonacci(num - 2) + fibonacci(num - 1);
}

/**
 * What is the most significant?
 */
void printAllItemsTwice(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << std::endl;
  }

  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << std::endl;
  }
}

/**
 * What is the most significant?
 */
void printFirstItemThenFirstHalfThenSayHi100Times(int arr[], int size) {
  std::cout << "First element of array = " << arr[0] << std::endl;

  for (int i = 0; i < size / 2; i++) {
    std::cout << arr[i] << std::endl;
  }

  for (int i = 0; i < 100; i++) {
    std::cout << "Hi" << std::endl;
  }
}

/**
 * What is the most significant?
 */
void printAllNumbersThenAllPairSums(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << std::endl;
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      std::cout << arr[i] + arr[j] << std::endl;
    }
  }
}

/**
 * Consider worst case
 */
bool arrayContainsElement(int arr[], int size, int element) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == element)
      return true;
  }
  return false;
}

int main() {
  int numbers[] = {2, 4, 7, 10, 11, 32, 45, 87};
  int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

  printFirstElementOfArray(numbers);

  printAllElementOfArray(numbers, numbersSize);

  printAllPossibleOrderedPairs(numbers, numbersSize);

  int fib = 7;
  fibonacci(fib);

  printAllItemsTwice(numbers, numbersSize);

  printFirstItemThenFirstHalfThenSayHi100Times(numbers, numbersSize);

  printAllNumbersThenAllPairSums(numbers, numbersSize);

  int search = 17;
  arrayContainsElement(numbers, numbersSize, search);

  return 0;
}
