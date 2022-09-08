#include <stdio.h>
#include <stdlib.h>

double prom(double arr[], double l) {
  double cont = 0.0;
  for(int i = 0; i < l; i++) {
    cont += arr[i];
  }
  return cont / l;
}

int main(int argc, char *argv[]) {
  double arr[] = {1,2,3,4,5,6,7,8,9};
  int l = atoi(argv[1]);
  printf("%.2f\n", prom(arr,l));
  return 0;
}
