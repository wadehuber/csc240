/* examples of recursion in c */
#include<stdio.h>

int fib1(int n);
int fib2(int n);
int fib2tail_helper(int n, int f2, int f1);

int main () {
    int ii;
    printf("fib1: \n  ");
    for (ii=0;ii<=10;ii++) 
        printf("%d ", fib1(ii));
    printf("\nfib2: \n  ");
    for (ii=0;ii<=10;ii++) 
        printf("%d ", fib2(ii));
}

/* compute the nth fibonacci number using naive recursion */
int fib1(int n) {
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
    if (n <= 0)
        return f2;
    else
        return (fib2tail_helper(n-1, f1, f1+f2));
}

