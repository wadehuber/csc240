#include<stdio.h>
#include<string.h>

/* Shifts every character in a string by 1 */
/*  s is a string */
void sftstr(char s[])
{
   int ii;
   int len = strlen(s);   /* gets length of a string */
   for (ii=0;ii<len;ii++)
     s[ii]++;  
}

/* counts the number of capitalized characters in string s */
int countcaps(char s[]) 
{
  int count = 0;
   int ii;
  int len = strlen(s);
  for (ii=0;ii<len;ii++) {
     if ( (s[ii] >= 'A') && (s[ii] <= 'Z') ) {
        count ++;
      }
   }
   return count;
}


int main() {
  char str1[] = "Hello";
  char str2[] = "WORLD!";
  printf("Initial string: %s\n",str1);
  printf("Initial string: %s\n",str2);
  sftstr(str1);
  sftstr(str2);
  printf("Final string: %s\n",str1);
  printf("Final string: %s\n",str2);

  printf("Caps in str1: %d\n",countcaps(str1));
  printf("Caps in str2: %d\n",countcaps(str2));
  printf("Caps in \"abcdefg\": %d\n",countcaps("abcdefg"));

  return 0;
}
