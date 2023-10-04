#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int info;
  struct no *prox;
} NoLista;

NoLista *criarLista() {
  NoLista *l = NULL;
  return l;
}

int estaVazia(NoLista **l) {
  return *l == NULL;
}

void insereNoInicio(NoLista **l, int v) {
  NoLista *novo = malloc(sizeof(NoLista));
  if (novo != NULL) {
    novo->info = v;
    novo->prox = *l;
    *l = novo;
  } else {
    printf("Houve algum erro na alocação de memória\n");
    exit(1);
  }
}

void imprimeLista(NoLista **l) {
  if (!estaVazia(l)) {
    NoLista *p;
    for (p = *l; p != NULL; p = p->prox)
      printf("%d  ", p->info);
    printf("\n");
  } else
    printf("A lista esta vazia, não a nada para ser impresso\n");
}

NoLista *encontraItem(NoLista **l, int n) {
  if (!estaVazia(l)) {
    NoLista *p;
    for (p = *l; p != NULL; p = p->prox) {
      if (p->info == n)
        return p;
    }
    printf("O item desejado não foi encontrado\n");
  } else
    printf("A lista esta vazia, não possui itens para serem buscados\n");
}