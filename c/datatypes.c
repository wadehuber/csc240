/* examples of C data types */
#include<stdio.h>
#include<limits.h>

int main ()
{
   char c = 'z'; 
   /*
   char c = 0x7a;   hex
   char c = 0172;   octal
   */
   short s = 1;
   int i = 2;
   long l = -3L;
   unsigned long ul = 3UL;
   /*unsigned long ul = l;*/
   long long ll = 4;
   float f = 5.0F;
   double d = 1.0 / 3.0;

   printf("Type  : Name\tValue\t\tSize (bytes)\n");
   printf("Char  : c\t%c\t\%d\t%d\n", c, c,sizeof(c));
   printf("Short : s\t%d\t\t%d\n", s, sizeof(s));
   printf("int   : i\t%i\t\t%d\n", i, sizeof(i));
   printf("Long  : l\t%ld\t\t%d\n", l, sizeof(l));
   printf("ULong : ul\t%lu\t\t%d\n", ul, sizeof(l));
   printf("Llong : ll\t%lld\t\t%d\n", ll, sizeof(ll));
   printf("Float : f\t%f\t%d\n", f, sizeof(f));
   printf("Double: d\t%f\t%d\n", d, sizeof(d));

}
