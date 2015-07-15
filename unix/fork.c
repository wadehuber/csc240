#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 


int main(int argc, char*argv[]) {
  int pid;
  pid_t childwait;
  int n = 0;
  int ii;

  printf("Before fork: n = %d\n", n);
  sleep(5);
  pid = fork();

  if(pid == 0) {
    n = 1;
    printf("Child process.  n=%d, PID=%d\n",n, pid);
    for (ii=0;ii<10;ii++) {
       printf ("\t\t\t\t\tC\n");
       sleep(1);
    }
  }
  else {
    n = 2;
    printf("Parent process.  n=%d, PID=%d\n",n, pid);
    for (ii=0;ii<5;ii++) {
       printf ("\t\t\t\t\t\tP\n");
       sleep(1);
    }
    wait(&childwait);
    printf("Parent process: child complete\n");
  }

  printf("After fork: n = %d\n", n);
  exit(0);
}
