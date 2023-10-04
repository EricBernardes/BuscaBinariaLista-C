#include "arquivo.h"
#include "lista.h"
#include "listaiguais.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

  clock_t start, end;
  start = clock();

  NoLista *l = criarLista();
  NoListaIgual *Igual = criarListaIguais();
  leArquivo(&l);
  printf("Lista dos números em memória:\n");
  imprimeLista(&l);
  printf("Insira o valor que deseja buscar na lista: ");
  int busca;
  scanf("%d", &busca);
  printf("A lista possui %d elementos iguais a %d\n", encontraItemIguais(&l, &Igual, busca), busca);
  printf("Os elementos buscados estão dispostos nos ponteiros: ");
  imprimeListaIguais(&Igual);

  getchar();

  end = clock();
  printf("\n\n  %f seg.\n", ((double)(end - start)) / CLOCKS_PER_SEC);
}
