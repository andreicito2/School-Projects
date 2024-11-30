/**
 * Activity 5: Example Hashing
 */
#include <stdio.h>
#include <stdlib.h>
/* hash function maps strings to unsigned ints */
unsigned int hash(char *key) {
  unsigned int rtnVal = 3253;
  char *p;
  for (p = key; *p != '\0'; p++) {
    rtnVal *= 28277;
    rtnVal += *p * 2749;
  }
  return rtnVal;
}

/**
 * main gets data to hash at command line
 * usage: h string (table size)
 */
int main(int argc, char *argv[]) {
  unsigned int modNum = 100; // default hash table size
  if (argc == 2) {
  } else if (argc == 3) {
    modNum = atoi(argv[2]);
  } else {
    printf("Need one or two arguments \n");
    return EXIT_FAILURE;
  }
  unsigned int hashVal = hash(argv[1]);
  unsigned int moddedHashVal = hashVal % modNum;
  printf("Hash slot for '%s' is %u (hash value=%u)\n", argv[1], moddedHashVal,
         hashVal);
  return EXIT_SUCCESS;
}
