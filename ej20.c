#include <stdio.h>
#include <stdlib.h>

void print_menu(char *arr[], int l) {
    for(int i = 0; i < l; i++) {
      printf("%s\n", arr[i]);
  }
}

int main(int argc, char *argv[]) {
  char *arr[] = {
    "1)Hacer la tarea",
    "2)Jugar a la play",
    "3)Aprobrar Trini",
    "4)Festejar"
  };
  int l = atoi(argv[1]);
  print_menu(arr,l);
  return 0;
}
