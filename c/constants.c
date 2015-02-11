#include <stdio.h>
main()
{
	const int i = 5;
	int *j;		
	/* i = i + 2; illegal since i is a constant */
	j = &i;	
	printf("i = %d\n", i);	 /* i = 5 */
	printf("j = %p (%d)\n", j, *j);	 /* i = 5 */

	*j = *j + 2;	 
	printf("i = %d\n", i);   /* i = 7? */
	printf("j = %p (%d)\n", j, *j);	 /* i = 7? */

	return 0;
}

