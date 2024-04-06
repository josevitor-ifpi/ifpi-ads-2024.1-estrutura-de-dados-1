#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "banco.h"
#include "conta.h"
#include "cliente.h"

void criar_banco(Banco *banco, char nome[], char endereco[]);
void listarContas(Conta *conta, int qtdContas);
void adicionar_conta(Banco *banco, Conta *conta);  // alterado para receber ponteiro para conta
void abrir_conta(Conta *conta, int numero, Cliente *titular); // alterado para receber ponteiro para cliente
void adicionar_transacao(Conta *conta, char *data, char *tipo_operacao, float valor);
void depositar(Conta *conta, float valor);
void sacar(Conta *conta, float valor);
void pix(Conta *conta_origem, Conta *conta_destino, float valor);
void extrato(Conta *conta);
void consultar_saldo(Conta *conta);
void limparTela(); // declaração da função limparTela

int main() {

    Banco banco;
    
    printf("\n===== SISTEMA BANCARIO =====\n");
    printf("Digite o nome do banco: ");
    scanf("%s", &banco.nome);

    printf("Digite o endereco do banco: ");
    scanf("%s", &banco.endereco);

    criar_banco(&banco, "Meu Banco", "Rua do Banco, 123");

    Conta contas[100]; // Cria um array de contas
    int qtdContas = 0; // Inicializa o número de contas como zero

    char menu[] = "\n===== MENU BANCARIO =====\n1. Abrir conta\n2. Listar Contas\n3. Depositar\n4. Sacar\n5. Consultar saldo\n6. Extrato\n7. Pix\n0 - Sair\n Selecione a opcao >>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    
    while (opcao != 0){

        if (opcao == 1) {
            Cliente titular;
            int numero;
            printf("Digite o número da conta: ");
            scanf("%d", &numero);
            printf("Digite o nome do titular: ");
            scanf("%s", &titular.nome);
            printf("Digite o cpf do titular: ");
            scanf("%s", &titular.cpf);
            abrir_conta(&contas[qtdContas], numero, &titular);
            qtdContas++;

        } else if (opcao == 2) {
            listarContas(contas, qtdContas);

        } else if (opcao == 3) {
            int numero;
            float valor;
            printf("Digite o número da conta: ");
            scanf("%d", &numero);
            printf("Digite o valor a depositar: ");
            scanf("%f", &valor);
            depositar(&contas[numero], valor);
            printf("Valor Depositado!");

        } else if (opcao == 4) {
            int numero;
            float valor;
            printf("Digite o número da conta: ");
            scanf("%d", &numero);
            printf("Digite o valor a sacar: ");
            scanf("%f", &valor);
            sacar(&contas[numero], valor);
            printf("Saque efetuado!");

        }  else if (opcao == 5) {
            int numero;
            printf("Digite o numero da conta: ");
            scanf("%d", &numero);
            printf("Informacoes da conta:\n");
            consultar_saldo(&contas[numero]);

        } else if (opcao == 6) {
            int numero;
            printf("Digite o número da conta: ");
            scanf("%d", &numero);
            extrato(&contas[numero]);

        } else if (opcao == 7) {
            int num_conta_origem, num_conta_destino;
            float valor;
            printf("Digite o numero da conta de origem: ");
            scanf("%d", &num_conta_origem);
            printf("Digite o numero da conta de destino: ");
            scanf("%d", &num_conta_destino);
            printf("Digite o valor a transferir: ");
            scanf("%f", &valor);
            pix(&contas[num_conta_origem], &contas[num_conta_destino], valor);
        }
            
        printf("%s", menu);
        scanf("%d", &opcao);
        limparTela();
    }
}

void limparTela() {
    system("cls");
}

void criar_banco(Banco *banco, char nome[], char endereco[]) {
    strcpy(banco->nome, nome);
    strcpy(banco->endereco, endereco);
    banco->num_contas = 0;
}

void adicionar_conta(Banco *banco, Conta *conta) {
    banco->contas[banco->num_contas++] = *conta;
}

void abrir_conta(Conta *conta, int numero, Cliente *titular) {
    conta->numero = numero;
    conta->saldo = 0;
    conta->titular = *titular;
}

void listarContas(Conta *conta, int qtdContas){
    printf("---- Contas Bancárias ----\n");

    for (int i = 0; i < qtdContas; i++){
        printf("Conta %d - Titular: %s - Cpf: %s\n", conta[i].numero, conta[i].titular.nome, conta[i].titular.cpf);
    }
    
}

void depositar(Conta *conta, float valor) {
    char data[20];
    printf("Digite a data (DD/MM/AAAA) do depósito: ");
    scanf("%s", data);
    conta->saldo += valor;
    adicionar_transacao(conta, data, "Deposito", valor);
}

void sacar(Conta *conta, float valor) {
    char data[20];
    printf("Digite a data (DD/MM/AAAA) do saque: ");
    scanf("%s", data);
    if (valor <= conta->saldo) {
        conta->saldo -= valor;
        adicionar_transacao(conta, data, "Saque", valor);
    } else {
        printf("Saldo insuficiente.\n");
    }
}

void extrato(Conta *conta) {
    printf("\n---- Informacoes do cliente ----\n");
    printf("Numero da conta: %d\n", conta->numero);
    printf("Saldo atual: %.2f\n", conta->saldo);
    printf("\n---- Extrato ----\n");
    for (int i = 0; i < conta->num_transacoes; i++) {
        printf("Data: %s | Tipo: %s | Valor: %.2f\n", conta->transacoes[i].data,
               conta->transacoes[i].tipo_operacao, conta->transacoes[i].valor);
    }
}

void adicionar_transacao(Conta *conta, char *data, char *tipo_operacao, float valor) {
    if (conta->num_transacoes < 100) {
        Transacao nova_transacao;
        strcpy(nova_transacao.data, data);
        strcpy(nova_transacao.tipo_operacao, tipo_operacao);
        nova_transacao.valor = valor;
        conta->transacoes[conta->num_transacoes++] = nova_transacao;
    } else {
        printf("Número máximo de transações atingido.\n");
    }
}

void consultar_saldo(Conta *conta) {
    printf("Titular: %s - CPF: %s\n", conta->titular.nome, conta->titular.cpf);
    printf("Saldo atual: %.2f\n", conta->saldo);
}

void pix(Conta *conta_origem, Conta *conta_destino, float valor){
    char data[20];
    printf("Digite a data (DD/MM/AAAA) da transferência PIX: ");
    scanf("%s", data);
    
    if (valor <= conta_origem->saldo) {
        conta_origem->saldo -= valor;
        conta_destino->saldo += valor;
        adicionar_transacao(conta_origem, data, "Transferência PIX - Saída", valor);
        adicionar_transacao(conta_destino, data, "Transferência PIX - Entrada", valor);
        printf("Transferência realizada com sucesso.\n");
    } else {
        printf("Saldo insuficiente na conta de origem.\n");
    }
}
