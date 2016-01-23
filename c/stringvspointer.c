#include<stdio.h>

int main ()
{
   char str1[] = "boo";     /* C string */
   char *str2 = "boo";      /* pointer to string literal */

   /* print strings */
   printf ("\nOriginal strings:\n");
   printf ("str1=%p, &str1=%p, str1=%s\n", str1, &str1, str1);
   printf ("str2=%p, &str2=%p, str2=%s\n", str2, &str2, str2);
   printf ("\n=======\n");

   /* print first character */
   printf ("\nPrint first characters\n");
   printf ("%p, *str1=%c, str1[0]=%c\n",&str1, *str1, str1[0]);
   printf ("%p, *str2=%c, str2[0]=%c\n",&str2, *str2, str2[0]);
   printf ("\n=======\n");

   /* print 3rd character */
   printf ("\nPrint third characters\n");
   printf ("%p, *(str1+3)=%c, str1[3]=%c\n",&str1, *(str1+3), str1[3]);
   printf ("%p, *(str2+3)=%c, str2[3]=%c\n",&str2, *(str2+3), str2[3]);
   printf ("\n=======\n");

   /* Differences */
   printf ("\nArrays and pointers are not exactly the same!\n");
   printf ("sizeeof(str1)=%d bytes, stored at %p\n", sizeof(str1), str1);
   printf ("sizeeof(str2)=%d bytes, stored at %p\n", sizeof(str2), str2);
   

   /* Can't do pointer arithmetic with arrays */
   /* str1++; */   /* Not alowed! */
   str2++;         /* This is allowed */

   /* Modifying string literal is undefined behavior */
   str1[1] = 'X';
   /* str2[1] = 'X'; */ /* Not allowed */
   
   return 0;
}
