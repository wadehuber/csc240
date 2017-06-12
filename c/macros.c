#include <stdio.h>    

/* to see the preprocessing step: 
      gcc -E macro.c
 */

#define NUM 10
#define DOUBLE(x)   2*x

int main () {                 
  int i, n = NUM;

  i = n * NUM;
  printf("i=%d\n", i);
  printf("DOUBLE(i)=%d\n", DOUBLE(i));

  return 0;
}

