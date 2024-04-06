#ifndef CLIENTE_H
#define CLIENTE_H

typedef struct {
    char nome[100];
    char cpf[12];
    float renda;
    char endereco[200];
} Cliente;

#endif