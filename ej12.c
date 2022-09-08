#include <stdio.h>
#include <stdlib.h>

void reverse(char * s) {
  int i = 0;
  int cont = 0;
  while(s[i] != 0) {
    cont++;
    i++;
  }
  for(int j = cont; j > -1; j--) {
    printf("%c", s[j]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  char * pal = argv[1];
  reverse(pal);
  return 0;
}
