#include <stdio.h>

int main () {         

  /* intitialize character array */
  char s1[] = {'h', 'e', 'l', 'l', 'o'};
  
  /* intitialize string (truncated) */
  char s2[3] = "there";
  
  /* intitialize string */
  char s3[] = "world";

  /* intitialize characters */
  char a=74, b=75, c=76, d=65;
  
  printf("String 1: %s\n", s1);
  printf("String 2: %s\n", s2);
  printf("String 3: %s\n", s3);

  /* replaces first 'l' in s1 with 0 */
  s1[2]=0;

  printf("\nString 1: %s\n", s1);
  printf("String 2: %s\n", s2);
  printf("String 3: %s\n", s3);

  return(0);
} 
