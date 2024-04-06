#include "conta.h"
#include <stdio.h>

void abrir_conta(Conta *conta, int numero, Cliente titular) {
    conta->numero = numero;
    conta->saldo = 0;
    conta->titular = titular;
}

void depositar(Conta *conta, float valor) {
    conta->saldo += valor;
}

void sacar(Conta *conta, float valor) {
    if (valor <= conta->saldo) {
        conta->saldo -= valor;
    } else {
        printf("Saldo insuficiente.\n");
    }
}

void extrato(Conta conta) {
    // Implementação do extrato
    printf("Número da conta: %d\n", conta.numero);
    // Exibir transações, se necessário
    printf("Saldo atual: %.2f\n", conta.saldo);
}

float consultar_saldo(Conta *conta) {
    return conta.saldo;
}