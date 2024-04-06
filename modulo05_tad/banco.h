#ifndef BANCO_H
#define BANCO_H

#include "conta.h"

typedef struct {
    char nome[100];
    char endereco[200];
    Conta contas[100]; // Supondo um máximo de 100 contas no banco
    int num_contas; // Número atual de contas no banco
} Banco;

void criar_banco(Banco *banco, char nome[], char endereco[]);
void adicionar_conta(Banco *banco, Conta *conta);

#endif