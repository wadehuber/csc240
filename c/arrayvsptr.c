/* Examples of how array & pointer variables can be used in similar ways */
#include <stdio.h>

#define COUNT 10

int main() {
    int array[COUNT];      /* integer array */
    int * ptr = array;     /* pointer to integer */
    int ii;

    for (ii=0;ii<COUNT;ii++) 
        array[ii] = ii;

    /* More memory is allocated to the array because it has to have
     * room for 10 integers.  The pointer just points somewhere.  */
    printf ("Sizes: array=%d, ptr = %d\n", sizeof(array), sizeof(ptr));

    /* Array indexing compared with pointer arithmetic */
    printf ("\nUsing array indexing & pointer arithmetic\n");
    for (ii=0;ii<COUNT;ii++) 
        printf("%d: array[%d]=%d  *(ptr+ii)=%d\n", ii, ii, array[ii],  *(ptr+ii));
  
    /* Using array indexing with a pointer variable (note this is slower) */ 
    printf ("\nUsing array indexing with a pointer variable\n");
    for (ii=0;ii<COUNT;ii++) 
        printf("%d: ptr[%d]=%d\n", ii, ii, ptr[ii]);

    /* Using pointer arithmetic with an array variable (note this is slower) */ 
    printf ("\nUsing pointer arithmetic with an array variable\n");
    for (ii=0;ii<COUNT;ii++) 
        printf("%d: *(array+%d)=%d\n", ii, ii, *(array+ii));
    return 0;
}
