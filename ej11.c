#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void com(char * pal, char * pal2) {
  if(strcmp(pal, pal2) == 0) printf("Son iguales\n");
  else printf("No son iguales\n");
}

int main(int argc, char *argv[]) {
  char * pal = argv[1];
  char * pal2 = argv[2];
  com(pal, pal2);
  return 0;
}
