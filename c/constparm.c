/* Example of constant parameters in C */
#include <stdio.h>

/* Preprocessor constant - no memory allocated */
#define NUM 5

/* const indicates that the parameter will not be changed, NOT that 
 *  only a constant value is acceptable */
int sum_num(const int a, const int b);

/* const pointers prevent the variable being pointed to from being
 * changed */
int add_one(const int * a) {
   int result;
   /* Not allowed:
     (*a)++; 
   */
   result = *a + 1; 
   return (result);
}

int main()
{
    int x = 1;
    int y = 2;
    printf("sum_num(x,y) = %d\n", sum_num(x, y));
    printf("sum_num(NUM,10) = %d\n", sum_num(NUM, 10));
    printf("add_one(&x) = %d\n", add_one(&x));
    /* Not allowed: the parameter has to be an address 
    printf("add_one(NUM) = %d\n", add_one(NUM));
    */
    return 0;
}

int sum_num(const int a, const int b) {
    /* if (a = 0) */   /* Bug, but this will be flagged by the compiler */
    if (a == 0) {
        return b;   /* if a=0 then be is the sum */
    }
    return (a + b);
}
