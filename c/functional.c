/* Example of functional vs non-functional programming */
#include<stdio.h>

int triple (int n);
int increment (int n);
void printit (int n);

int main() {
   int a, b, c;

   /* non-functional using variables */
   printf("Non-functional\n ");
   a = 10;
   b = triple(a);
   c = increment(b);
   printit(c);

   /* functional style */
   printf("Functional\n ");
   printit(increment(triple(a)));
}

int triple (int n) {
  return (n * 3);
}

int increment (int n) {
  return (n + 1);
}

void printit (int n) {
  printf("n = %d\n", n);
}

