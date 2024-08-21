#include <stdlib.h>
#include <stdio.h> 
#include "matriz.h"

struct matriz{
    int linha;
    int coluna;
    float* v;
};

Matriz* novaMatriz(int m, int n){
    Matriz* mat = (Matriz*) malloc (sizeof(Matriz));

    mat->linha = m;
    mat->coluna = n;
    mat->v = (float*) malloc (m*n*sizeof(float));
    return mat;
}

void libera(Matriz* mat){
    free(mat->v);
    free(mat);
}

float acessa(Matriz* mat, int i, int j){
    int k;  //indice do elemento

    k = i*mat->coluna + j;
    mat->v[k] = v;
}

void atribui (Matriz* mat, int i, int j, float v){
    mat->v[i][j] = v;
}

int linhas(Matriz* mat){
    return mat->linha;
}

int colunas(Matriz* mat){
    return mat->coluna;
}