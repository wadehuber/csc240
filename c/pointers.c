#include<stdio.h>

int main()
{
   int x = 7, y=382482, z;
   int *p = &z;  /* pointer ptr equal to the address of x */

   /* print out all variables and their values & addresses & sizes*/
   printf("x: %10d, %p, %d\n", x, &x, sizeof(x));   
   printf("y: %10d, %p, %d\n", y, &y, sizeof(y));   
   printf("z: %10d, %p, %d\n", z, &z, sizeof(z));   
   /* p: value of p, &p: address of p, *p: value stored in address location stored in p */
   printf("p: %10p, %p, %d, %d\n, ", p, &p, sizeof(p), *p);   
   printf("\n=======================\n");   

   /* user pointer arithmetic to go through memory */
   /*  this is dangerous! */
   printf("p: %10p, %p, %d\n", p, &p, *p);   
   p++;
   printf("p: %10p, %p, %d\n", p, &p, *p);   
   p++;
   printf("p: %10p, %p, %d\n", p, &p, *p);   
   printf("\n=======================\n");   

   /* change x through a pointer */
   printf("x: %10d, %p\n", x, &x);   
   printf("p: %10p, %p, %d\n", p, &p, *p);   
   p = &x;
   *p = 30;
   printf("x: %10d, %p\n", x, &x);   
   printf("p: %10p, %p, %d\n", p, &p, *p);   


   return (0);
}
