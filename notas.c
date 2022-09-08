#include <stdio.h>
#include <stdlib.h>

void print_menu() {
  printf("1)Ver notas\n");
  printf("2)Agrear notas\n");
  printf("3)Borrar notas\n");
  printf("4)Salir\n");
}

void see_menu() {
  FILE *fp;
  fp = fopen("notas.txt", "r");
  int c;
  printf("-------Notas--------\n");
  while((c = fgetc(fp)) != EOF) {
    putchar(c);
  }
  printf("\n");
  printf("-------Fin----------\n");
  fclose(fp);
}

void add_menu() {
  char notas[100] = "";
  int c = getchar();
  FILE *fp;
  fp = fopen("notas.txt", "a");
  printf("Que queres anotar?\n");
  fgets(notas, 100, stdin);
  fprintf(fp, "%s", notas);
  fclose(fp);
}

void delete_menu() {
  FILE *fp;
  fp = fopen("notas.txt", "w");
  fclose(fp);
}

int main(int argc, char *argv[]) {
  while(1) {
    print_menu();
    int choice;
    scanf("%d\n", &choice);
    switch (choice) {
      case 1:
      see_menu();
      break;
      case 2:
      add_menu();
      break;
      case 3:
      delete_menu();
      break;
      case 4:
      exit(0);
      default:
      printf("Esa no es una opcion\n");
      break;
    }
  }
  return 0;
}
