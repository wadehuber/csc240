#include<stdio.h>
#include<string.h>

union myUnion {
  int num;
  char str[12];
};

int main() {
  union myUnion u = {68};

  printf("u: size=%d  u.num=%d (%x)\n", sizeof(u), u.num, u.num);

  strncpy(u.str, "CHANDLER", 12);
  printf("u: size=%d  u.str=%s (%x)\n", sizeof(u), u.str, u.num);

  u.num = 0x58585858;
  printf("u: size=%d  u.str=%s (%x)\n", sizeof(u), u.str, u.num);
  
  return 0;
}

