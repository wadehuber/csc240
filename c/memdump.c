/* Example of scanning memory byte by byte */
#include <stdio.h>

struct example {
    int a;
    char c1;
    char c2;
    char c3;
    char c4;
    int b;
};

/* dump len bytes of memory starting at start */
void memdump (char * start, int len) {
    int ii;
    char * ptr = start;

    while (ii<len) {
        printf ("%4d %4x  (%c)\n", *(ptr+ii), *(ptr+ii), *(ptr+ii));
        ii++;
    }
}

main() {

    /* ex.a = ASCII values of a,b,c,d, ex.b=ASCII value of #### */
    struct example ex1 = {0x61626364, 'A', 'B', 'C', 'D', 0x23232323};

    memdump ((char*) &ex1, sizeof(ex1));
}
