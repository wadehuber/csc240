/* Very basic linked list example */
#include <stdio.h>
#include <stdlib.h>
#include"basiclist.h"

int list_add(node_t ** list, void * data) {
  int ret = 0;
  node_t * newnode = (node_t *) malloc(sizeof(node_t));
  if (newnode == NULL) {
    ret = -1;
  }
  else {
    newnode->data = data;
    newnode->next = *list;
  }
  *list = newnode;
  return ret;
}

#ifdef TEST
int main (void)
{
  int ii;
  int * new_int;
  node_t * list = NULL;
  node_t * curr;

  for(ii=0;ii<10;ii++) {
    new_int = (int *) malloc(sizeof(int));
    *new_int = ii * 10;
    list_add(&list, new_int);
  }

  ii = 0;
  curr = list;
  while (curr != NULL) {
    printf("list[%d] = %d\n", ii, *((int *) curr->data));
    ii++;
    curr = curr->next;
  }
  printf("It worked!\n");
  return 0;
}
#endif

