/* examples of recursion in c */
#include<stdio.h>

/* Compile with -DNUM=XX to calc fib(XX) */
#ifndef NUM
#define NUM 21
#endif

int fib1counter[NUM];
int fib2counter[NUM];

int fib1(int n);
int fib2(int n);
int fib2tail(int, int);
int fib2tail_helper(int n, int f2, int f1);


int main () {
    int ii;
    int num;

    for (ii=0;ii<NUM;ii++) {
      fib1counter[ii]=0;
      fib2counter[ii]=0;
    }

    num=NUM-1;
    printf("fib1(%d)=%d,   fib2(%d)=%d\n", num, fib1(num), num, fib2(num));
    for (ii=0;ii<NUM;ii++) {
      printf("fib1counter[%d] = %d,   fib2counter[%d] = %d\n", 
              ii, fib1counter[ii], ii, fib2counter[ii]);
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

int fib2(int n) { 
    return fib2tail(n, 1);
}
/* compute factorial - tail recursion.  Note that we don't have to
 *   do anything with the return value, we only return it */
int fib2tail(int n, int res) {
    if (n<=0) 
        return 0;
    else 
        return fib2tail_helper(n, 0, 1);
}

int fib2tail_helper(int n, int f2, int f1) {
    fib2counter[n]++;
    if (n <= 1)
        return f1;
    else
        return (fib2tail_helper(n-1, f1, f1+f2));

}

