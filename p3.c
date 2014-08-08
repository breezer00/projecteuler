/* The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 */

#include "headers.h"
#define N 600851475143

/* Fermat's factorization method:
 *   an odd integer as the difference of two squares:
 *   N = a^2 - b^2
 *     = (a+b)(a-b)
 *
 * This solution doesn't seem to get the largest factor, it also doesn't 
 * guarantee prime .. it's just a factor. Sadface.
 */

uint64_t isSQ (uint64_t x) {
  return (x == (uint64_t)sqrt(x) * (uint64_t)sqrt(x));
}

int main () {
  uint64_t a, b2;

  a = (uint64_t) sqrt(N);
  b2 = a * a - N;
  while (!isSQ(b2)){
    a ++;
    b2 = a * a - N;
  }
  printf("%" PRIu64 "\n", a + (uint64_t)sqrt(b2));
  printf("%" PRIu64 "\n", a - (uint64_t)sqrt(b2));
  return 0;
}
