/* Each new term in the Fibonacci sequence is generated by adding the previous 
 * two terms. By starting with 1 and 2, the first 10 terms will be:
 *
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 * By considering the terms in the Fibonacci sequence whose values do not 
 * exceed four million, find the sum of the even-valued terms.
 */

#include "headers.h" 

#define FOUR_MILLION 4000000
/* Idealy we should use dynamic programming, but I don't really want to 
 * implement an array list for this problem.
 */
int main () {
  uint64_t sum = 0;
  uint64_t f1, f2;
  f1 = 1; 
  f2 = 2;
  sum += f2;

  while (f1 + f2 <= FOUR_MILLION) {
    if (f1 < f2) {
      f1 = f1 + f2;
      if (f1 % 2 == 0) {
        sum += f1;
      }
    }
    else {
      f2 = f1 + f2;
      if (f2 % 2 == 0) {
        sum += f2;
      }
    }
  }
  printf("%" PRIu64 "\n", sum);
  return 0;
}
