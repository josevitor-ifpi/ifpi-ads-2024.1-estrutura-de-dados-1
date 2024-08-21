#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct matriz Matriz;

Matriz* novaMatriz(int m, int n);
void libera(Matriz* mat);
// Retorna o valor do elemento da linha i e coluna j da matriz
float acessa(Matriz* mat, int i, int j);
// Atribui o valor dado ao elemento da linha i e coluna j da matriz
void atribui(Matriz* mat, int i, int j, float v);
int linhas(Matriz* mat);
int colunas(Matriz* mat);

#endif