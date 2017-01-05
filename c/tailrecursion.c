/* examples of recursion in c */
#include<stdio.h>

/* Compile with -DNUM=XX to calc fib(XX) */
#ifndef NUM
#define NUM 21
#endif

int fib1counter[NUM];
int fibtailcounter[NUM];

int fib1(int n);
int fibtail(int n);
int fibtail_helper(int n, int f2, int f1);


int main () {
    int ii;
    int num;

    for (ii=0;ii<NUM;ii++) {
      fib1counter[ii]=0;
      fibtailcounter[ii]=0;
    }

    num=NUM-1;
    printf("fib1(%d)=%d,   fibtail(%d)=%d\n", num, fib1(num), num, fibtail(num));
    for (ii=0;ii<NUM;ii++) {
      printf("fib1counter[%d] = %d,   fibtailcounter[%d] = %d\n", 
              ii, fib1counter[ii], ii, fibtailcounter[ii]);
    }
   return 0;
}

/* compute the nth fibonacci number using naive recursion */
int fib1(int n) {
    fib1counter[n]++;
    if (n<=0) 
        return 0;
    else if (n<=2) 
        return 1;
    else 
        return fib1(n-1) + fib1(n-2);
}

/* compute factorial - tail recursion.  Note that we don't have to
 *   do anything with the return value, we only return it */
int fibtail(int n) {
   return fibtail_helper(n, 0, 1);
}

int fibtail_helper(int n, int f2, int f1) {
   fibtailcounter[n]++;
   if (n <=1 )
     return f1;
   else
     return fibtail_helper(n-1, f1, f1+f2);
}

/* iterative solution */
int fibwhile(int n) {
  int f=1, f1 = 1, f2 = 1;
  int ii=n;
  while (ii > 2) {
    f = f1 + f2;
    f2 = f1;
    f1 = f; 
    ii--; 
  }
  return f;
}
