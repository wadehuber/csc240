#include<stdio.h>
#include<stdlib.h>  /* malloc */
#include<string.h> /* strncpy */

#define STRLEN 10

int main() {
  char s1[STRLEN] = "Hello1!";
  char s2[] = "Hello2!";
  char s3[] = {'H', 'e', 'l', 'l','o', '3', '!'};  /* no null terminator! */
  char s4[] = {'H', 'e', 'l', 'l','o', '4', '!','\0'};
  char * s5 = "Hello5!";
  char * s6;
  char sX[4] = "HelloX!";  /* comment out this line to avoid warning */
  
  s6 = (char *) malloc(STRLEN * sizeof(char));
  strncpy(s6, "Hello6!", STRLEN);

  printf("s1: %s size=%d\n", s1, sizeof(s1));
  printf("s2: %s size=%d\n", s2, sizeof(s2));
  printf("s3: %s size=%d\n", s3, sizeof(s3));
  printf("s4: %s size=%d\n", s4, sizeof(s4));
  printf("s5: %s size=%d\n", s5, sizeof(s5));
  printf("s6: %s size=%d\n", s6, sizeof(s6));
  printf("sX: %s size=%d\n", sX, sizeof(sX));

  s3[4] = '\0';
  printf("s3: %s size=%d\n", s3, sizeof(s3));
  free(s6);
  return 0;
}
