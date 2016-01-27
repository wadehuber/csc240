#include<stdio.h>

int main () 
{
  int a[4] = {1,2,3,4};
  double b[3] = {2.4, 3.14, 9.999};
  char c[6] = {'H', 'e', 108, 108, 'o', 'X'};
  char d[] = "world!";
  int ii;

  for (ii=0;ii<4;ii++) 
  {
    printf("a[%d]=%d\n", ii, a[ii]);
  }
 
  printf("\n"); 
  for (ii=0;ii<3;ii++) 
  {
    printf("b[%d]=%f\n", ii, b[ii]);
  }

  printf("\n"); 
  printf("c[] = %s\n", c);
  for (ii=0;ii<6;ii++) 
  {
    printf("c[%d]=%c (%d)\n", ii, c[ii], c[ii]);
  }

  printf("\n"); 
  printf("d[] = %s\n", d);
  for (ii=0;ii<7;ii++) 
  {
    printf("d[%d]=%c (%d)\n", ii, d[ii], d[ii]);
  }


  printf("\n");
  printf ("sizeof(c)=%d,  sizeof(d)=%d\n", sizeof(c), sizeof(d));
  /* char vs int */
  printf("\n");
  printf("F (%d) - A (%d) = %d\n", 'F', 'A', 'F' - 'A');
  printf("5 letters after C (%d) is %c (%d)\n", 'C', 'C' + 5, 'C' + 5);

  return 0;
}
