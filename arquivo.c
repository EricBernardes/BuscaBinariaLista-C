#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int tamArquivo() {
  FILE *file = fopen("bancodados.txt", "r");

  if (file == NULL)
    return 0;

  fseek(file, 0, SEEK_END);
  int size = ftell(file);
  fclose(file);

  return size;
}

void leArquivo(NoLista **l) {
  int numero;
  FILE *arq;
  arq = fopen("bancodados.txt", "r");
  while (fscanf(arq, "%d\n", &numero) == 1) {
    insereNoInicio(l, numero);
  }
  fclose(arq);
}
