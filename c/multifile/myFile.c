#include <stdio.h>
#include "myFile.h"

int counter = 0;

void init(void) {
   printf("Resetting counter (old value was %d)\n",counter);
   counter = 1;
}

int addone(int n) {
   counter ++;
  return (n + 1);
}

void doubleIt(int *n) {
   counter ++;
   *n = *n * 2;
}

int factorial(int n) {
   counter ++;
  if (n <= 1)
     return 1;
  else
     return (n * factorial (n-1));
}
