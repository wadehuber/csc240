#include<stdio.h>

#define BUFFER 85

int main ()
{
  FILE *fp;
  char buffer[BUFFER];

  fp = fopen("test.txt", "r");  /* modes: "r", "w", "a" */

  while ( fgets(buffer, BUFFER, fp))  {
    if (strncmp(buffer,  "Part 2", 6) == 0)
      printf("C is my favorite!\n");
    else
      fputs(buffer,stdout);  /* print to stdout */
  }

  fclose(fp);
}
