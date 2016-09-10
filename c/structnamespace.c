#include<stdio.h>

struct myStruct {
  int num;
  char name[10];
};

typedef struct {
  int count;
  float average;
} myStruct;

int main () {

  struct myStruct struct1 = {3, "myStruct"};
  myStruct struct2 = {2, 3.14};

  printf("num=%d, name=%s\n", struct1.num, struct1.name);
  printf("count=%d, average=%f\n", struct2.count, struct2.average);

  return 0;
}
