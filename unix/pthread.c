#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h> 

/* gcc pthread.c -lpthread */

void *count_to_ten(void *x) {
    int ii;
    for (ii=0;ii<10;ii++) {
        printf("\t\t\tx=%d\n", (*(int *)x)++);
        fflush(stdout);
        sleep(1);
    }
    printf("\nThread finished!\n");
    return NULL;
}

/*
int main(int argc, char*argv[]) {
*/
int main() {
  int x = 0;
  int y = 0;
  int ii;
  int rc;

  pthread_t new_thread;

  printf("Before:\n");
  printf("x=%d at %p\n\n",x, &x);
  printf("y=%d at %p\n\n",y, &y);

  if (rc = pthread_create(&new_thread, NULL, count_to_ten, &x)) {
      fprintf(stderr, "ERROR code %d calling pthread_create\n",rc);
      return 1;
  }

  for (ii=0;ii<5;ii++) {
      printf("\t\ty=%d\n", y++);
      fflush(stdout);
      sleep(1);
  }

  if (pthread_join(new_thread, NULL)) {
      fprintf(stderr, "Error joining pthread\n");
      return 1;
  }

  printf("After:\n");
  printf("x=%d at %p\n",x, &x);
  printf("y=%d at %p\n",y, &y);

  return(0);
}
