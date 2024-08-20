#include <stdio.h>
#include <stdlib.h>
#include "lista.h"



Lista* novaLista(){
    return NULL;
}

Lista* inserirInicio(Lista* lista, int valor){
    Lista* novo = (Lista*) malloc (sizeof(Lista));
    
    novo->valor = valor;
    novo->proximo = lista;
    return novo;
}

Lista* inserirFinal(Lista* lista, int valor){
    if(estaVazia(lista)){
        return inserirInicio(lista, valor);
    }

    Lista* novo = (Lista*) malloc (sizeof(Lista));
    
    novo->valor = valor;
    Lista* ultimo = lista;

    while(ultimo->proximo != NULL){
        ultimo = ultimo->proximo;
    }
    ultimo->proximo = novo;
    novo->proximo = NULL;

    return lista;

}

int estaVazia(Lista* lista){
    if (lista == NULL){
        return 1;
    }
    return 0;
}

void listar(Lista* lista){
    Lista* p;
    if (estaVazia(lista)){
        printf("\nLISTA VAZIA\n");
        return;
    }

    for(p = lista; p != NULL; p = p->proximo){
        printf("%d ", p->valor);
    }

}

