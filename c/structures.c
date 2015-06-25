#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define STRLEN 20       /* default string length */

/* User defined type */
typedef struct mystruct {
  char name[STRLEN];
  int num;
} mystruct_t;

/* forward declarations */
void print_structure(mystruct_t s);
void init_structure(mystruct_t *, char *, int); /* no param names required */

int main() {
    mystruct_t struct1 = {"Alice", 10};         /* initializing declaration */
    mystruct_t * struct2 = NULL;

    /* malloc allocates memory from the heap */
    struct2 = (mystruct_t *) malloc(sizeof(mystruct_t));

    /* add values to struct2 */
    init_structure(struct2, "Bob", 17);

    /* print both structures */
    print_structure(struct1);
    print_structure(*struct2);

    /* now change values for struct1 & print */
    init_structure(&struct1, "Sue", 30);
    print_structure(struct1);
    
    return 0;
}

/* function definitons.  Note how the structure parameter is accessed differently 
 *   depending on whether the parameter is a pointer or not */

/* struct parameter is pass-by-address */
void init_structure(mystruct_t * s, char * name, int num) {
   strncpy(s->name, name, STRLEN);
   s->num = num;
}

/* struct parameter is pass-by-value */
void print_structure(mystruct_t s) {
    printf("name: %s, num=%d\n", s.name, s.num);
}
