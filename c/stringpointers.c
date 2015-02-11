#include<stdio.h>

int main ()
{
   char *p = "hello", *s = "this is a string";

   /* print strings pointed to by p & s */
   printf ("%p, s=%s\n",&s, s);
   printf ("%p, p=%s\n",&p, p);
   printf ("\n=======\n");

   /* print characters pointed to by p & s */
   printf ("%p, s=%c\n",&s, *s);
   printf ("%p, p=%c\n",&p, *p);
   printf ("\n=======\n");

   /* do some arithmetic on p & s */
   p++;
   s = s + 3;
   printf ("%p, s=%c\n",&s, *s);
   printf ("%p, p=%c\n",&p, *p);
   printf ("\n=======\n");
   

}
