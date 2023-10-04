typedef struct no NoLista;

typedef struct noigual {
  NoLista *info;
  struct noigual *prox;
} NoListaIgual;

NoListaIgual *criarListaIguais();

int estaVaziaIguais(NoListaIgual **l);

void insereNoInicioIguais(NoListaIgual **l, int v);

void imprimeListaIguais(NoListaIgual **l);

int encontraItemIguais(NoLista **l, NoListaIgual **l2, int n);
