#include <stdio.h>

void saludar(char * s) {
  printf("Hola %s\n", s);
};

int main(int argc, char *argv[]) {
  char *persona = argv[1];
  saludar(persona);
  return 0;
}
