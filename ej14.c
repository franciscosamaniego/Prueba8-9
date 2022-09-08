#include <stdio.h>
#include <stdlib.h>

void arrchange(int arr[], int i, int j) {
  int t = arr[i];
  arr[i] = arr[j];
  arr[j] = t;
}

int main(int argc, char *argv[]) {
  int arr[] = {1,2,3,4,5,6,7};
  int i = atoi(argv[1]);
  int j = atoi(argv[2]);
  printf("1: %d 2: %d\n", arr[i], arr[j]);
  arrchange(arr,i,j);
  printf("1: %d 2: %d\n", arr[i], arr[j]);
  return 0;
}
