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
   int u = 2;
   long l = -3L;
   unsigned long ul = 3UL;
   long long ll = 4;       /* C11 */
   float f = 5.0F;
   double d = 1.0 / 3.0;

   printf("Type  : Name\tValue\t\tSize (bytes)\n");
   printf("Char  : c\t%d\t%d\t%d\tRange: %d\t%d\n", c, c,sizeof(c), CHAR_MIN, CHAR_MAX);
   printf("Short : s\t%d\t\t%d\tRange: %d\t%d\n", s, sizeof(s), SHRT_MIN, SHRT_MAX);
   printf("int   : i\t%i\t\t%d\tRange: %d\t%d\n", i, sizeof(i), INT_MIN, INT_MAX);
   printf("Uint  : u\t%i\t\t%d\tRange: %d\t%d\n", u, sizeof(u), 0, UINT_MAX);
   printf("Long  : l\t%ld\t\t%d\tRange: %ld\t%ld\n", l, sizeof(l), LONG_MIN, LONG_MAX);
   printf("ULong : ul\t%lu\t\t%d\tRange: %lu\t%lu\n", ul, sizeof(l), (unsigned long) 0, ULONG_MAX);
   printf("Llong : ll\t%lld\t\t%d\n", ll, sizeof(ll));
   printf("Float : f\t%f\t%d\n", f, sizeof(f));
   printf("Double: d\t%f\t%d\n", d, sizeof(d));

   return 0;
}
