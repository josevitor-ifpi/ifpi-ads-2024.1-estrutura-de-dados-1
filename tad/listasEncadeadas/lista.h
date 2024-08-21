#ifndef LISTA_H

struct lista{
    int valor;
    struct lista* proximo;
};

typedef struct lista Lista;

Lista* novaLista();
Lista* inserirInicio(Lista* lista, int valor);
void listar(Lista* lista);
int estaVazia(Lista* lista);
Lista* inserirFinal(Lista* lista, int valor);



#endif