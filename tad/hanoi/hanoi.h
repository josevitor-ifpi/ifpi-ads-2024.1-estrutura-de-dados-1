#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char valor;
    struct Node* proximo;
} Node;

typedef struct Pilha {
    Node* topo;
} Pilha;

void jogar();
void empilhar(Pilha *pilha, char valor);
char desempilhar(Pilha *pilha);
void mover_disco(Pilha *origem, Pilha *destino);
void imprimir_pilhas(Pilha* R, Pilha* G, Pilha* B, int num_discos);
void imprimir_pilha(Node* pilha);
int verificar_vitoria(Pilha* R, Pilha* G, Pilha* B);
void obter_movimento(Pilha* R, Pilha* G, Pilha* B);

void configurar_jogo(Pilha *R, Pilha *G, Pilha *B, int num_discos, int nivel);