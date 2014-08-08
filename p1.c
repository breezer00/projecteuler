/* If we list all the natural numbers below 10 that are multiples of 3 or 5, 
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * 
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <string.h>
#include <stdio.h>

/* The basic idea is to increment 3 and 5 together to avoid duplicates */
int main() {
  int threes, fives, sum;
  threes = 3;
  fives = 5;
  sum = 0;

  while (threes < 1000 || fives < 1000) {
    if (threes < fives) {
      sum += threes;
      threes += 3;
      if (threes == fives) {
        threes += 3;
      }
    }
    else {
      sum += fives;
      fives += 5;
      if (threes == fives) {
        fives += 5;
      }
    }
  }

  printf("%d\n", sum);
  return 0;
}
