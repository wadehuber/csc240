/* Example of three types of constants in C */
#include <stdio.h>

/* Preprocessor constant - no memory allocated */
#define NUM 5

/* Enumeration constants */
typedef enum {TEN=10, TWENTY=20, THIRTY=30} values_t;
typedef enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY} classdays_t;

int main()
{
	const int const_var = NUM; /* constant variable - memory allocated */
	int *j;		
    values_t vals = TWENTY;
    classdays_t day = MONDAY;
    
    printf("vals = %d (TEN), day=%d (MONDAY)\n", vals, day);
    vals = TWENTY;
    day = TUESDAY;
    printf("vals = %d (TWENTY), day=%d (TUESDAY)\n\n", vals, day);

	/* Next line is illegal since const_var is a constant 
	const_var = const_var + 2; 
    */
	j = &const_var;	
	printf("const_var = %d\n", const_var);	 /* const_var = 5 */
	printf("j = %p (%d)\n", (void *) j, *j);	 /* const_var = 5 */

    /* You can change a constant variable through a pointer, so be
     *   be careful!  (This doesn't work with a preprocessor constant */
	*j = *j + 2;	 
	printf("const_var = %d\n", const_var);   /* const_var = 7? */
	printf("j = %p (%d)\n", (void *) j, *j);	 /* const_var = 7? */

	return 0;
}

