/* example of using function pointers */
#include <stdio.h>

typedef struct {
  void * data;                 
  void (* modify)(void * d);  /* pointer to a function that returns void 
                               *   the parameter is a void pointer */
} funptr;

void myFunc (void * d) {
	int * x = (int *) d;  /* casts the parameter pointer to an int pointer */
	*x = *x * 2;          /* note that x is dereferenced */
}

int main() {

  int a = 8;
  funptr k;

  k.data = (void *) &a;   /* we have to cast &a to void to avoid warning */
  k.modify = (*myFunc);   /* sets the function pointer in k to myFunc */

  printf("Value = %d\n", *((int*) k.data));

  /* call the function stored in k */
  (*k.modify)(k.data);

  printf("Value = %d\n", *((int*) k.data));
  
  return 0;
}




