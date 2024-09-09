#include <stdio.h>
#include <stdlib.h>
#include "hanoi.h"



void jogar() {
    Pilha R = {NULL}, G = {NULL}, B = {NULL};

    printf("     ===== Torre de Hanoi =====\n");

    int num_discos;
    printf("\nDigite o numero de discos para a Torre R: ");
    scanf("%d", &num_discos);

    int nivel = 0;

    while (nivel < 1 || nivel > 3) {
        printf("\nEscolha o nivel de dificuldade:\n");
        printf("1 - Nível Básico\n");
        printf("2 - Nível Intermediário\n");
        printf("3 - Nível Avançado\n");
        printf("Digite sua escolha: ");
        scanf("%d", &nivel);

        if (nivel < 1 || nivel > 3) {
            printf("Opção inválida! Escolha um nível entre 1 e 3.\n");
        }
    }

    configurar_jogo(&R, &G, &B, num_discos, nivel);


    for (int i = 0; i < num_discos; i++) {
        char cor;
        printf("Digite a cor do disco %d (R, G ou B): ", i+1);
        scanf(" %c", &cor);
        empilhar(&R, cor);
    }

    while (!verificar_vitoria(&R, &G, &B)) {
        imprimir_pilhas(&R, &G, &B, num_discos);
        obter_movimento(&R, &G, &B);
    }

    printf("Parabens! Voce venceu!\n");

}

void empilhar(Pilha *pilha, char valor) {
    Node* novo_no = (Node*)malloc(sizeof(Node));
    if (novo_no == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

    novo_no->valor = valor;
    novo_no->proximo = pilha->topo;
    pilha->topo = novo_no;
}

char desempilhar(Pilha *pilha) {
    if (pilha->topo == NULL) {
        printf("Pilha vazia!\n");
        
        return '\0';
    }

    Node* aux = pilha->topo;
    char valor = aux->valor;
    pilha->topo = aux->proximo;
    free(aux);
    return valor;
}

void mover_disco(Pilha* origem, Pilha* destino) {
    if (origem->topo == NULL) {
        printf("A pilha de origem está vazia!\n");
        return;
    }

    char valor = desempilhar(origem);
    empilhar(destino, valor);
}

void imprimir_pilhas(Pilha* R, Pilha* G, Pilha* B, int num_discos) {
    char estado_R[num_discos], estado_G[num_discos], estado_B[num_discos];

    for (int i = 0; i < num_discos; i++) {
        estado_R[i] = ' ';
        estado_G[i] = ' ';
        estado_B[i] = ' ';
    }

    Node* atual;
    int i = num_discos - 1; // Começar do final para a base
    
    atual = R->topo;
    while (atual != NULL && i < num_discos) {
        estado_R[i--] = atual->valor;
        atual = atual->proximo;
    }

    i = num_discos - 1;
    atual = G->topo;
    while (atual != NULL && i < num_discos) {
        estado_G[i--] = atual->valor;
        atual = atual->proximo;
    }

    i = num_discos - 1;
    atual = B->topo;
    while (atual != NULL && i < num_discos) {
        estado_B[i--] = atual->valor;
        atual = atual->proximo;
    }

    printf("\nEstado Atual das Torres:\n");
    for (int linha = num_discos - 1; linha >= 0; linha--) {
        printf("   %c     %c     %c\n", estado_R[linha], estado_G[linha], estado_B[linha]);
    }
    printf("  ---   ---   ---\n");
    printf("   R     G     B\n");
}

void imprimir_pilha(Node* pilha) {
    while (pilha != NULL) {
        printf(" %c ", pilha->valor);
        pilha = pilha->proximo;
    }
    printf("\n");
}

int verificar_vitoria(Pilha* R, Pilha* G, Pilha* B) {
    Node* atual;

    atual = R->topo;
    while (atual != NULL) {
        if (atual->valor != 'R') return 0;
        atual = atual->proximo;
    }

    atual = G->topo;
    while (atual != NULL) {
        if (atual->valor != 'G') return 0;
        atual = atual->proximo;
    }

    atual = B->topo;
    while (atual != NULL) {
        if (atual->valor != 'B') return 0; 
        atual = atual->proximo;
    }

    return 1;
}

void obter_movimento(Pilha* R, Pilha* G, Pilha* B) {
    char origem, destino;
    printf("Digite o movimento (Origem Destino EX: R G): "); 
    scanf(" %c %c", &origem, &destino);

    Pilha *p_origem = NULL, *p_destino = NULL;

    if (origem == 'R') p_origem = R;
    else if (origem == 'G') p_origem = G;
    else if (origem == 'B') p_origem = B;
    else {
        printf("Origem inválida!\n");
        return;
    }

    if (destino == 'R') p_destino = R;
    else if (destino == 'G') p_destino = G;
    else if (destino == 'B') p_destino = B;
    else {
        printf("Destino inválido!\n");
        return;
    }

    mover_disco(p_origem, p_destino);
}

void configurar_jogo(Pilha *R, Pilha *G, Pilha *B, int num_discos, int nivel) {
    if (nivel == 1) {
        for (int i = 0; i < num_discos; i++) {
            empilhar(R, 'R');
        }
    } else if (nivel == 2) {
        for (int i = 0; i < num_discos; i++) {
            if (i % 2 == 0) {
                empilhar(R, 'R'); 
            } else {
                empilhar(G, 'G');
            }
        }
    } else if (nivel == 3) {
        for (int i = 0; i < num_discos; i++) {
            if (i % 3 == 0) {
                empilhar(R, 'R');
            } else if (i % 3 == 1) {
                empilhar(G, 'G');
            } else {
                empilhar(B, 'B');
            }
        }
    }
}
