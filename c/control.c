/* Control Structure examples */

#include <stdio.h>

int main (void)
{
  int a = 5;
  int b, ii;

  printf ("Enter an integer : ");
  scanf ("%d", &b);

  printf ("\nIf-then-else statment : ");
  if (a < b)
	  printf("%d is less than %d\n", a, b);
  else
	  printf("%d is not less than %d\n", a, b);

  printf ("\nSwitch statement : ");
  switch (b)
  {
	case 1 :
	  printf("You entered a one.\n");
	  break;
	case 2 :
	  printf("You entered a two.\n");
	  break;
	case 3 :
	  printf("You entered a three.\n");
	  break;
	case 4 :
	  printf("You entered a four\n");
	  break;
	default : 
	  printf("You entered a number bigger than 4\n");
  }
 
  printf ("\nWhile loop : \n");
  ii = 0;
  while (ii <= b)
  {
	  printf ("  Your number = %d, loop variable = %d\n", b, ii);
	  ii = ii + 2;
  }
  
  printf ("\nDo-while loop : \n");
  do {
	  printf ("  Your number = %d, loop variable = %d\n", b, ii);
	  ii -= 2;
  } while ( (ii > 0) );
 
  printf ("\nFor loop : \n");
  for (ii=0;ii<b;ii++) {
   	printf ("  loop variable = %d\n", ii);
  }

  printf ("\nBreak example : \n");
  while (1) { 
	  if (a > 100) {
		  printf ("  Breaking . . \n");
		  break;
	  }
	  else {
		  a++;
	  }
  }

  printf ("\nContinue example : \n");
  for (ii=0;ii<=b;ii++) {
	  if ( (ii % 3) != 0) {
		  continue; 
	  }
	  printf ("  %d", ii);
  }
  printf ("\n");

  return 0;
}

