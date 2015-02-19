/* Example of manipulating C strings using pointer arithmetic */
/* We do a simple Caesar cypher with two strings */
#include <stdio.h>

int main(void)
{
	int ii=0;
	char str1[] = "my password is 1a2s3", str2[22];  /* character arrays */
	char *ptr1 = "send me your password", *ptr2;     /* character pointers */

	printf("messages before encryption:\n");
	printf ("  %s\n  %s\n", str1, ptr1);

	printf ("\nencrypting str1 & ptr1\n");
    
    /* note that we can use str1 as a pointer - note that str1[ii] and
     *   *(str1 + ii) are equivalent.  Also, ii++ evaluates to ii first then
     *   increments the value of ii */
	while (str1[ii] != '\0')
		str1[ii]=*(str1 + ii++)+1;

    /* use a 2nd pointer (ptr2) to encrypt string ptr1 so that we 
     *   don't lose the pointer to the first character */
	ptr2 = ptr1;
	while (*ptr2 != '\0')
		*ptr2=*(ptr2++)+1;

    /* copy the string pointed to by ptr2 into array str2 */
	ii=0;
	while (ii<22)
		str2[ii]=*(ptr1+ii++);

    /* Print results after encrypting using array variables*/
	printf ("messages after encryption:\n");
	printf ("  %s\n  %s\n",str1,str2);

	printf ("\ndecrypting str1 & ptr1\n");
    /* decrypt the strings using the pointers */
	ptr1 = str1;
	ptr2 = str2;
	while (*ptr1 != '\0')		// decrypt str1
		*ptr1=*(ptr1++) -1;
	while (*ptr2 != '\0') 		// decrypt str2
		*ptr2=*(ptr2++) -1;

    /* print the strings.  Note that we haven't modified str1/str2
     *   directly since the last print statement, but because ptr1/ptr2
     *   are pointing to the start of the two arrays str1/str2 still
     *   get decrypted */
	printf("messages after decryption:\n");
	printf("  %s\n  %s\n", str1, str2);
}
	



