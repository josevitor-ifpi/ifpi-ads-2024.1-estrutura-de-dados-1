#include <stdlib.h>
#include <stdio.h> 
#include "matriz.h"

int main() {
    // Criação de uma nova matriz 3x3
    Matriz* mat = novaMatriz(3, 3);

    // Atribuindo valores à matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            atribui(mat, i, j, i + j);
        }
    }

    // Acessando e imprimindo os valores da matriz
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", acessa(mat, i, j));
        }
        printf("\n");
    }

    // Liberando a memória alocada para a matriz
    libera(mat);

    return 0;
}