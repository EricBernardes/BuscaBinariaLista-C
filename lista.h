typedef struct no {
  int info;
  struct no *prox;
} NoLista;

NoLista *criarLista();

int estaVazia(NoLista **l);

void insereNoInicio(NoLista **l, int v);

void imprimeLista(NoLista **l);

NoLista *encontraItem(NoLista **l, int n);