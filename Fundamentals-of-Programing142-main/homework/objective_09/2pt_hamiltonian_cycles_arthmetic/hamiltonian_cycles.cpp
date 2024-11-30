/**
 * Intermediate: Arthmetic calculation using recursion.
 */
#include "hamiltonian_cycles.h"

long int getHamiltonianCycles(long int num) {

  if (num == 1) {
    return 0;
  }
  if (num == 2) {
    return 1;
  }
  if (num == 3) {
    return 2;
  }
  if (num == 4) {
    return 6;
  }

  else {
    return 2 * (getHamiltonianCycles(num - 1)) +
           2 * (getHamiltonianCycles(num - 2)) -
           2 * (getHamiltonianCycles(num - 3)) + getHamiltonianCycles(num - 4);
  }
}