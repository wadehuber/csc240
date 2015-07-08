/* examples of recursion in c */
#include<stdio.h>

int fact1(int n);
int fact2(int n);
int fact2tail(int n, int res);
int fact3(int n);

int main () {
   printf("fact1: 10!=%d\n", fact1(10));
   printf("fact2: 10!=%d\n", fact2(10));
   printf("fact3: 10!=%d\n", fact3(10));
   
   return 0;
}

/* compute the factorial of n using recursion */
int fact1(int n) {
    if (n<=1) {
        return 1;
    }
    else {
        /* note that when the factorial returns we still need to 
         *   multiply result by 10 */
        return n* fact1(n-1);
    }
}

int fact2(int n) { 
    return fact2tail(n, 1);
}
/* compute factorial - tail recursion.  Note that we don't have to
 *   do anything with the return value, we only return it */
int fact2tail(int n, int res) {
    if (n<=1) {
        return res;
    }
    else {
        return fact2tail(n-1, n * res);
    }
}

/* iterative method with similar computational structure to fact2 
 *   note that n is used as a local variable */
int fact3(int n) { 
    int res = 1;
    while (n > 0) {
        res = res * n;
        n--;
    }
    return res;
}
