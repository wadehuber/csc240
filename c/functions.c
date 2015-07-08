#include<stdio.h>

/* forward declarations / prototypes */
int increment1 (int n);
void increment2 (int * n);

int main() {
    int x = 4, y=0;
    printf("x = %d,  y = %d\n", x, y);
    y=increment1(x);
    printf("x = %d,  y = %d\n", x, y);
    increment2(&x);  /* pass the ADDRESS since formal parameter is a POINTER */
    printf("x = %d,  y = %d\n", x, y);
    printf("x = %d, increment1(x)=%d\n", x, increment1(x));
    printf("x = %d,  y = %d\n", x, y);
    
    return 0;
}


/* function returns a value.  Call-by-value - actual parameter gets copied
 *   into local variable n.
 *   The actual parameter is not modified */

int increment1 (int n) {
    return n+1;
}

/* procedure does not return a value.  Call-by-address - actual parameter 
 *   gets copied into local variable n, but since n is a pointer it
 *   functions as an alias of the actual parameter
 *   The actual parameter IS modified (and should be an address!) */

void increment2 (int * n) {
    (*n)++;
}
