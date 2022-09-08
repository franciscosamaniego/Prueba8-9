#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double raiz(double a, double b, double c) {
  double desc = b * b -4 * a * c;
  double root = sqrt(desc);
    double x1 = (-b + root) / 2 * a;
    return x1;
}
double raiz2(double a, double b, double c) {
    double desc = b * b -4 * a * c;
    double root = sqrt(desc);
    double x2 = (-b - root) / 2 * a;
    return x2;
}

int main(int argc, char *argv[]) {
  double a = atoi(argv[1]);
  double b = atoi(argv[2]);
  double c = atoi(argv[3]);
  printf("X1: %.2f\n", raiz(a,b,c));
  printf("X2: %.2f\n", raiz2(a,b,c));
  return 0;
}
