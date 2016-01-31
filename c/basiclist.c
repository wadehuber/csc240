/* Very basic linked list example */
#include <stdio.h>
#include <stdlib.h>
#include "basiclist.h"

int list_add(void * data, node_t ** list) {
  int ret = 0;
  node_t * newnode = (node_t *) malloc(sizeof(node_t));
  newnode->data = data; 
  newnode->next = *list;
  *list = newnode;
  return ret;
}

#ifdef TEST
int main (void)
{
  int ii;
  int * new_int;
  node_t * curr;
  node_t * list1 = NULL;

  for(ii=0;ii<10;ii++)
    {
      new_int = (int *) malloc(sizeof(int));
      *new_int = ii * 10;
      list_add(new_int, &list1);
    }
  
  ii = 0;
  curr = list1;
  while (curr != NULL) {
    printf("list[%d] = %d\n", ii, *((int*) curr->data));
    ii++;
    curr = curr->next;
  }

  return 0;
}
#endif

