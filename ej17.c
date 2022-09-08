#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int max(int arr[], int l) {
  int max = INT_MIN;
  for(int i = 0; i < l; i++) {
    if(arr[i] > max) max = arr[i];
  }
  return max;
}

int main(int argc, char *argv[]) {
  int arr[] = {3,2,3,4,5,6,10,20,45,89};
  int l = atoi(argv[1]);
  printf("%d\n", max(arr,l));
  return 0;
}
