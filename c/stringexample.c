#include <stdio.h>
#include <string.h>
int main() {
	int ii;
	char s1[ ] = "Hello";
	char s2[5] = "World";

	/* Print character by character */
	printf("s1: ");
	for (ii = 0; ii < 5; ii++) 
		printf("%c", s1[ ii ]); 
	printf("\ns2: ");
	for (ii = 0; ii < 5; ii++) 
		printf("%c", s2[ ii ]); 

	/* Print using printf 
	 *  
	 */
	printf("\n\ns1:[%s]\ns2:[%s]\n",s1,s2);

	printf ("\nSizes: s1=%d, s2=%d\n", sizeof(s1), sizeof(s2));

	printf("End of string character (s1): %d\n", s1[sizeof(s1)-1]);
	
	return 0;
}
