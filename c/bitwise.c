/* Bitwise operators example */
#include<stdio.h>
#include<math.h>
 
int main ()
{
   unsigned int z = 4;
   unsigned int i = 0;
   unsigned int k = 1;
   unsigned int l = 2;
   unsigned int j = pow(2,16) - 1;
 
   printf ("\n==== Initial ====\n");
   printf ("i=%d\n", i);
   printf ("j=%d\n", j);
   printf ("i=%d\n", k);
   printf ("j=%d\n", l);

   /* XOR */ 
   printf ("\n==== XOR with 1 ====\n");
   printf ("i=%d\n", i ^ 1);
   printf ("j=%d\n", j ^ 1);
   printf ("i=%d\n", k ^ 1);
   printf ("j=%d\n", l ^ 1);
 
   /* OR */ 
   printf ("\n==== OR with 1 ====\n");
   printf ("i=%d\n", i | 1);
   printf ("j=%d\n", j | 1);
   printf ("i=%d\n", k | 1);
   printf ("j=%d\n", l | 1);
 
   /* AND */ 
   printf ("\n==== AND with 1 ====\n");
   printf ("i=%d\n", i & 1);
   printf ("j=%d\n", j & 1);
   printf ("k=%d\n", k & 1);
   printf ("l=%d\n", l & 1);

   /* Shift left */ 
   printf ("\n==== Left shift by 1 bit ====\n");
   printf ("i=%d\n", i << 1);
   printf ("j=%d\n", j << 1);
   printf ("k=%d\n", k << 1);
   printf ("l=%d\n", l << 1);
 
   printf ("\n==== Left shift by 3 bits ====\n");
   printf ("z=%d\n", z);
   printf ("z=%d\n", z << 3);
 
   return 0;
}
