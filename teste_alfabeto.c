#include <stdio.h>

char *tipo(char letra) {
  if (letra == 'A') {
    return "vogal";
  }
  if (letra == 'I') {
    return "vogal";
  }
  if (letra == 'E') {
    return "vogal";
  }
  if (letra == 'O') {
    return "vogal";
  }
  if (letra == 'U') {
    return "vogal";
  }
  return "consoante";
}

int main(int argc, char const *argv[]) {
  char alfabeto[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                     'I', 'J', 'L', 'M', 'N', 'O', 'P', 'Q',
                     'R', 'S', 'T', 'U', 'V', 'X', 'Y', 'Z'};
  char vogal[] = {'A', 'E', 'I', 'O', 'U'};
  char consoante[] = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'L', 'M', 'N',
                      'P', 'Q', 'R', 'S', 'T', 'V', 'X', 'Y', 'Z'};
  int tamanho = sizeof(alfabeto);
  int Tamanho_Vogal = sizeof(vogal);
  int Tamanho_Consoante = sizeof(consoante);
  printf("Tamanho: %i %i\n", Tamanho_Vogal, Tamanho_Consoante);

  for (size_t i = 0; i < tamanho; i++) {
    printf(" %i tem a %s %c \n", i, tipo(alfabeto[i]), alfabeto[i]);
  }
  return 0;
}
