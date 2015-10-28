#include<stdio.h>

int g = 10;

int f(int x) {
   x = x + g;  
   return x;
}

void problem() {
  g++;
}

int main () {

  int x = 10;
  
  printf("x=%d\n", x); 
  printf("f(x)=%d\n", f(x)); 

  int num1 = f(x) + f(x);
  problem();
  int num2 = f(x) + f(x);

  printf("num1=%d\n", num1); 
  printf("num2=%d\n", num2); 
   
  return 0;
}
