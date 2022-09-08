#include <stdio.h>
#include <stdlib.h>

int cont(char * s) {
  int i = 0;
  int cont = 0;
  while(s[i] != 0) {
    cont++;
    i++;
  }
  printf("Caracteres: %d\n", cont);
}

int main(int argc, char *argv[]) {
  char * pal = argv[1];
  cont(pal);
  return 0;
}
