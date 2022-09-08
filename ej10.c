#include <stdio.h>
#include <stdlib.h>

void minu(char * s) {
  int i = 0;
  while(s[i] != 0) {
    if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    i++;
  }
}

int main(int argc, char *argv[]) {
  char * pal = argv[1];
  minu(pal);
  printf("%s\n", pal);
  return 0;
}
