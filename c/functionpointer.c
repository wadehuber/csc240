#include <stdio.h>

typedef struct {
  void * data;
  void (* modify)(void * d);
} funptr;

void myFunc (void * d) {
	int * x = (int *) d;
	*x = *x * 2;
	d = (void *) x;
}

main() {

  int a = 8;
  funptr k;
  funptr k;

  k.data = (void *) &a;
  k.modify = (*myFunc);
  printf("Value = %d\n", *((int*) k.data));
  (*k.modify)((void *) k.data);
  printf("Value = %d\n", *((int*) k.data));
}




