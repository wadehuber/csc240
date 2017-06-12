#include <stdio.h>
#include "myFile.h"

/* declaration for external global variable */
extern int counter;

/* Run recursive factorial, count # of calls */
void test_factorial(int n);

int main()
{
  int x = 10;
  int y = addone(x);

  init();

  printf ("x=%d, y=%d\n",x,y);  
  printf ("addone(x)=%d\n",addone(x+10));  

  doubleIt(&x);
  printf ("x=%d, y=%d\n",x,y);  

  printf("4! = %d\n", factorial(4));
  printf("x! = %d\n", factorial(x));


  printf("\n\nTesting factorial:\n");
  test_factorial(10);
  printf("\n");
  test_factorial(40);
  printf("\n");
  return 0;
}

void test_factorial(int n) {
  init();   /* Initialize the counter */
  printf("%d! = %d\n", n, factorial(n));
  printf("   Total calls: %d\n",counter);
}
