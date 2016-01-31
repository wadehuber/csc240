/* Very basic linked list example */
/*   Add to head, remove from tail */
#ifndef _BASICLIST_H_
#define _BASICLIST_H_

typedef struct node {
  void * data;
  struct node * next;
} node_t;

int list_add(void * data, node_t ** list);
#endif
