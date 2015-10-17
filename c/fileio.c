#include<stdio.h>

#define BUFFER 85

int main ()
{
  FILE *fp;
  char buffer[BUFFER];

  fp = fopen("test.txt", "r");  /* modes: "r", "w", "a" */

  while ( fgets(buffer, BUFFER+1, fp))  {
    if (strncmp(buffer,  "hello\n", BUFFER) == 0)
      printf("Hello yourself\n");
    else
      fputs(buffer,stdout);  /* print to stdout */
  }

  fclose(fp);
}
