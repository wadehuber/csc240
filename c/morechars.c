/* Examples of characters as integer values */
#include<stdio.h>

char toUpper(char c) {
  char ret = '@';
  if ((c >=  'A') && (c <= 'Z')) {
    ret = c;
  }
  else if ((c >=  'a') && (c <= 'z')) {
    ret = c - ('a' - 'A');
  }
  return ret;
}

int main () {
  
  int a = 'A';
  int b = '9';
  int c = b - 48;
  int d = b - '0';

  char m = 'm';
  char n = 'N';

  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  printf("m=%d (%c),  toUpper(m)=%d (%c)\n", m, m, toUpper(m), toUpper(m));
  printf("n=%d (%c),  toUpper(n)=%d (%c)\n", n, n, toUpper(n), toUpper(n));
  printf("b=%d (%c),  toUpper(b)=%d (%c)\n", b, b, toUpper(b), toUpper(b));
  printf("c=%d (%c),  toUpper(c)=%d (%c)\n", c, c, toUpper(c), toUpper(c));
  
  return 0;
}
