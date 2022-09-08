#include <stdio.h>
#include <stdlib.h>

int arr(int a[], int l) {
  for(int i = 0; i < l; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int a[] = {1,2,3,4,10,3,4,5,6,12,91,12};
  int l = atoi(argv[1]);
  arr(a,l);
  return 0;
}
