#ifndef CONTA_H
#define CONTA_H

#include "cliente.h"

typedef struct {
    char data[20]; // Pode ser uma string representando a data
    char tipo_operacao[20]; // "Depósito" ou "Saque"
    float valor;
} Transacao;

typedef struct conta{
    int numero;
    float saldo;
    Cliente titular;
    Transacao transacoes[100];
    int num_transacoes;
} Conta;

void abrir_conta(Conta *conta, int numero, Cliente *titular);
void depositar(Conta *conta, float valor);
void sacar(Conta *conta, float valor);
void extrato(Conta *conta);
void adicionar_transacao(Conta *conta, char *data, char *tipo_operacao, float valor);
void consultar_saldo(Conta *conta);

#endif