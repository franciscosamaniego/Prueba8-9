#include <stdio.h>
#include <stdlib.h>

void change(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("A: %d B: %d\n", a,b);
  change(&a,&b);
  printf("A: %d B: %d\n", a,b);
  return 0;
}
