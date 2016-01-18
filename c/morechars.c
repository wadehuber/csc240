/* Examples of characters as integer values */
#include<stdio.h>

/* Convert a character to upper case.  
 * If not a character, return '@' */
char toUpper(char c) {
  char ret = '@';  
  /* Check if c is alreday upper case */
  if ((c >=  'A') && (c <= 'Z')) {
    ret = c;
  }
  /* If it is a lower case, convert it */
  else if ((c >=  'a') && (c <= 'z')) {
    ret = c - ('a' - 'A');
  }
  return ret;
}

int main () {
  /* Note that character constants are integers, so they can be used
   *   as integers. */
  int a = 'A';
  int b = '9';
  int c = b - 48;
  int d = b - '0';

  char m = 'm';
  char n = 'N';

  printf("a,b,c,d are ints, m & n are chars\n");
  printf("Print as integers & as characterss\n");
  printf("a = %d, (%c)\n", a, a);
  printf("b = %d, (%c)\n", b, b);
  printf("c = %d, (%c)\n", c, c);
  printf("d = %d, (%c)\n", d, d);
  printf("m = %d, (%c)\n", m, m);
  printf("n = %d, (%c)\n", n, n);

  printf("\ntoUpper\n");
  printf("toUpper(m)=%d (%c)\n", toUpper(m), toUpper(m));
  printf("toUpper(n)=%d (%c)\n", toUpper(n), toUpper(n));
  printf("toUpper(b)=%d (%c)\n", toUpper(b), toUpper(b));
  printf("toUpper(c)=%d (%c)\n", toUpper(c), toUpper(c));

  /* Size of char vs. size of character constant */
  printf("\nsize of char m vs size of 'm'\n");
  printf("sizeof(m)=%d\n", sizeof(m));
  printf("sizeof('m')=%d\n", sizeof('m'));
  
  return 0;
}
