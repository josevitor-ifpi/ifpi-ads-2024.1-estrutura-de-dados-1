#include <stdio.h>
#include <stdlib.h>
#include "pilha_encadeada.h"

Pilha* novaPilha() {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->topo = NULL; 
    pilha->itens = 0;   
    return pilha;
}

void push(Pilha* pilha, int valor) {
    No* novoNo = (No*) malloc(sizeof(No));
    novoNo->valor = valor;
    novoNo->proximo = pilha->topo; 
    pilha->topo = novoNo;          
    pilha->itens++;
}

int pop(Pilha* pilha) {
    if (estaVazia(pilha)) {
        printf("A pilha está vazia!\n");
        return -1; 
    }

    No* noRemovido = pilha->topo;
    int valor = noRemovido->valor;
    pilha->topo = noRemovido->proximo; 
    free(noRemovido); 
    pilha->itens--;

    return valor;
}

int estaVazia(Pilha* pilha) {
    return pilha->topo == NULL; 
}

void mostrarPilha(Pilha* pilha, char* titulo) {
    printf("%s\n", titulo);
    No* atual = pilha->topo;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}
