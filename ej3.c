#include <stdio.h>
#include <stdlib.h>

void igual(int a, int b, int c) {
  if(a == b && b == c) printf("True\n");
  else printf("False\n");

}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  igual(a,b,c);
  return 0;
}
