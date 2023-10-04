#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct noigual {
  NoLista *info;
  struct noigual *prox;
} NoListaIgual;

NoListaIgual *criarListaIguais() {
  NoListaIgual *l = NULL;
  return l;
}

int estaVaziaIguais(NoListaIgual **l) {
  return *l == NULL;
}

void insereNoInicioIguais(NoListaIgual **l, NoLista **p) {
  NoListaIgual *novo = malloc(sizeof(NoListaIgual));
  if (novo != NULL) {
    novo->info = *p;
    novo->prox = *l;
    *l = novo;
  } else {
    printf("Houve algum erro na alocação de memória\n");
    exit(1);
  }
}

void imprimeListaIguais(NoListaIgual **l) {
  if (!estaVaziaIguais(l)) {
    NoListaIgual *p;
    for (p = *l; p != NULL; p = p->prox)
      printf("%p  ", p->info);
    printf("\n");
  } else
    printf("A lista esta vazia, não a nada para ser impresso\n");
}

int encontraItemIguais(NoLista **l, NoListaIgual **l2, int n) {
  int cont = 0;
  if (!estaVazia(l)) {
    NoLista *p;
    for (p = *l; p != NULL; p = p->prox) {
      if (p->info == n) {
        insereNoInicioIguais(l2, &p);
        cont++;
      }
    }
    return cont;
    if (cont == 0)
      printf("Não foi encontrado o elemento buscado!!!\n");
  } else
    printf("A lista esta vazia, não possui itens para serem buscados\n");
}
