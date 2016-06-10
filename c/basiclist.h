/* Very basic linked list example */
/*   Add to head, remove from tail */
#ifndef BASICLIST_H_
#define BASICLIST_H_

typedef struct node {
  void * data;         /* pointer to data */
  struct node * next;  /* pointer to next next node */
} node_t;

int list_add(node_t ** list, void * data);

#endif
