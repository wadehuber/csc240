#include<stdio.h>

int main() {
    char c = 'k', *p = &c;

    /* after initialization */
    printf("c: %10c, %10d, %p\n", c, c, &c);   
    printf("p: %10p, %10p, %d\n", p, &p, *p);   
    printf("\n========\n");

    /* after incrementing p  */
    (*p) ++;  /* dereferencing happens before p is incremented */
    printf("c: %10c, %10d, %p\n", c, c, &c);   
    printf("p: %10p, %10p, %d\n", p, &p, *p);   
    printf("\n========\n");

    /* after incrementing p  */
    *p++;  /* dereferencing happens before p is incremented */
    printf("c: %10c, %10d, %p\n", c, c, &c);   
    printf("p: %10p, %10p, %d\n", p, &p, *p);   
    printf("\n========\n");

    p = &c;
    /* after dereferencing p & adding 1 */
    *p = c+1;
    printf("c: %10c, %10d, %p\n", c, c, &c);   
    printf("p: %10p, %10p, %d\n", p, &p, *p);   
    printf("\n========\n");

    /* printing pointer operations */
    printf("%c, %c\n", *(&c), c);
    printf("%p, %p, %c\n", *(&p), p, **(&p));
    
    return 0;
}


