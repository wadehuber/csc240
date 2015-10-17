/* Making a system call from C */
#include<stdio.h>

int main() {

    printf("Starting system call . . .\n");
    system("ls -l"); /* execute UNIX command to list directory contents */
    printf("Done with system call\n");
}
