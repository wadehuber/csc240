#include<stdio.h>

int main()
{
   int i = 137, *j, **k;

   printf("i: %10d, %p\n", i, &i);   

   j = &i;
   /* *j is an alias of i */
   printf("j: %10p, %p, %d\n", j, &j, *j);   

   k = &j;
   /* *k is an alias j, **k is an alias of i */
   printf("k: %10p, %p, %p, %d\n", k, &k, *k, **k);   

   return (0);
}
