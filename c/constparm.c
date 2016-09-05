/* Example of constant parameters in C */
#include <stdio.h>

/* Preprocessor constant - no memory allocated */
#define NUM 5

int sum_num(const int a, const int b);

int main()
{
    int x = 1;
    int y = 2;
    printf("sum_num(x,y) = %d\n", sum_num(x, y));
    printf("sum_num(NUM,10) = %d\n", sum_num(NUM, 10));
    return 0;
}

int sum_num(const int a, const int b) {
    /* if (a = 0) */   /* Bug, but this will be flagged by the compiler */
    if (a == 0) {
        return b;   /* if a=0 then be is the sum */
    }
    return (a + b);
}
