#include <stdio.h>

int main(void)
{
	int i=0;
	char a[] = "my massword is 1a2s3", b[22];
	char *p = "send me your password", *q;
	printf("message before encryption:\n");
	printf ("  %s\n  %s\n", a, p);
	printf ("encrypting a\n");
	while (a[i] != '\0')
		a[i]=*(a + i++)+1;
	q = p;
	while (*q != '\0')
		*q=*(q++)+1;
	i=0;
	while (i<22)
		b[i]=*(p+i++);
	q = b;
	while (*q != '\0')
		*q=*(q++)+1;
	printf ("message after encryption:\n");
	printf ("  %s\n  %s\n",a,b);
	p = a;
	q = b;
	while (*p != '\0')		// decrypt a
		*p=*(p++) -1;
	while (*q != '\0') 		// decrypt b
		*q=*(q++) -1;
	printf("message after decryption:\n");
	printf("  %s\n  %s\n", a, b);
}
	



