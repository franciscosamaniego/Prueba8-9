#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int min(int arr[], int l) {
  int min = INT_MAX;
  for(int i = 0; i < l; i++) {
    if(arr[i] < min) min = arr[i];
  }
  return min;
}

int main(int argc, char *argv[]) {
  int arr[] = {3,2,3,4,5,6,10,20,45,89};
  int l = atoi(argv[1]);
  printf("%d\n", min(arr,l));
  return 0;
}
