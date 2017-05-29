/* Examples of how sizeof() works with arrays */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    int array[SIZE];      /* integer array */
    int * ptr;            /* pointer to integer */
    int ii;

    ptr = malloc(10 * sizeof(int));

    for (ii=0;ii<SIZE;ii++)  {
        array[ii] = ii;
        *(ptr + ii) = ii + SIZE;
    }

    /* More memory is allocated to the array because it has to have
     * room for 10 integers.  The pointer just points somewhere.  */
    printf ("Contents of the arrays\n");
    for (ii=0;ii<SIZE;ii++) 
        printf("%d: array[%d]=%d  *(ptr+ii)=%d\n", ii, ii, array[ii],  *(ptr+ii));
  
    printf ("\narray and ptr both refer to 10 integers\n");
    printf ("sizeof(array)=%lu\n", sizeof(array));
    printf ("sizeof(ptr)=%lu\n", sizeof(ptr));

    return 0;
}
