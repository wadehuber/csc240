/* Demostrate some things to be careful of with C strings */
#include <stdio.h>

void string_declarations() {
  /* intitialize character array */
  char s1[] = {'h', 'e', 'l', 'l', 'o'};
  
  /* intitialize string (truncated) */
  char s2[3] = "there";
  
  /* intitialize string - automatically determine length */
  char s3[] = "world";

  printf("String 1: %s\n", s1);
  printf("String 2: %s\n", s2);
  printf("String 3: %s\n", s3);

  /* replaces first 'l' in s1 with 0 */
  s1[2]=0;

  printf("\nString 1: %s\n", s1);
  printf("String 2: %s\n", s2);
  printf("String 3: %s\n", s3);
}

int main () {         
  string_declarations();

  return(0);
} 
