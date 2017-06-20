#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * allocate_string(const char * str);

int main() {
  char *ptr; 
  int ii;

  ptr = malloc(10);
  if (ptr == NULL) {
    fputs("Error allocating memory for ptr\n", stderr);
  }
  strncpy(ptr, "Goodbye!", 9);
  puts(ptr);

  /* Test allocate_string */
  free(ptr);
  ptr = allocate_string("This is a test.");
  printf("ptr=%p len=%d  string=%s\n", (void *) ptr, strlen(ptr), ptr);
  free(ptr);
  ptr = allocate_string("S");
  printf("ptr=%p len=%d  string=%s\n", (void *) ptr, strlen(ptr), ptr);
  free(ptr);
  ptr = allocate_string("12345 --- This is a long test. --- 54321");
  printf("ptr=%p len=%d  string=%s\n", (void *) ptr, strlen(ptr), ptr);
  free(ptr);

  ptr = malloc(20);
  printf("%p: ", (void *) ptr);
  for (ii=0;ii<20;ii++)
    printf("%d ", ptr[ii]);
  printf("\n");
  free(ptr);

  ptr = calloc(20,sizeof(char));
  printf("%p: ", (void *) ptr);
  for (ii=0;ii<20;ii++)
    printf("%d ", ptr[ii]);
  printf("\n");

  ptr = realloc(ptr, 30);
  printf("%p: ", (void *) ptr);
  for (ii=0;ii<30;ii++)
    printf("%d ", ptr[ii]);
  printf("\n");
  free(ptr);

  return 0;
}

/* Make a copy of a string in memory */
char * allocate_string(const char * str) {
  int size = strlen(str);
  char * ptr = malloc(size * sizeof(char));
  strncpy(ptr, str, size);
  return ptr;
}

