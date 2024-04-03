#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    int matricula;
    char nome[120]; 
    int idade;
    float renda;
};

void pedirDados(struct aluno *novoAluno);
void listarAlunos(struct aluno *alunos, int qtdAlunos);
void editarAluno(struct aluno *alunos, int qtdAlunos);// não altera a qtdAlunos, só o elemento indicado 
void removerAluno(struct aluno *alunos, int *qtdAlunos);// quando quiser alterar o valor do array indica ele como ponteiro
void buscarAlunoPorMatricula(struct aluno *alunos, int qtdAlunos);
void buscarAlunoPorNome(struct aluno *alunos, int qtdAlunos);
void limparTela();

int main(){
    struct aluno *alunos;
    alunos = (struct aluno *)malloc(10 * sizeof(struct aluno));
    int qtd_alunos = 0;

    char menu[] = ">>> SysAluno <<<\n1 - Add Aluno\n2 - Listar Alunos\n3 - Atualizar Aluno\n4 - Remover Aluno\n5 - Buscar Aluno por matricula\n6 - Buscar Aluno por parte do nome\n\n0 - Sair\n>>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while (opcao != 0){
        if (opcao ==1) {
            struct aluno novoAluno;
            pedirDados(&novoAluno);
            alunos[qtd_alunos] = novoAluno;
            qtd_alunos++;
        } else if (opcao == 2) {
            listarAlunos(alunos, qtd_alunos);
        } else if (opcao == 3) {
            editarAluno(alunos, qtd_alunos);
        } else if (opcao == 4) {
            removerAluno(alunos, &qtd_alunos);
        }  else if (opcao == 5) {
            buscarAlunoPorMatricula(alunos, qtd_alunos);
        } else if (opcao == 6) {
            buscarAlunoPorNome(alunos, qtd_alunos);
        }
        
        printf("%s", menu);
        scanf("%d", &opcao);
        limparTela();
    }
}

void limparTela() {
    system("cls");
}

void pedirDados(struct aluno *novoAluno){
    printf("Matricula: ");
    scanf("%d", &novoAluno->matricula);// &: pq matricula é inteiro

    printf("Nome: ");
    scanf(" %120[^\n]", novoAluno->nome);
}

void listarAlunos(struct aluno *alunos, int qtdAlunos){
    printf("---- Alunos Cadastrados ----\n");

    for (int i = 0; i < qtdAlunos; i++){
        printf("%d - %s\n", alunos[i].matricula, alunos[i].nome);
    }
    printf("-----------------------------------------------------------\n");
}

void editarAluno(struct aluno *alunos, int qtdAlunos){
    int matricula;
    printf("Digite a matricula do aluno que deseja editar: ");
    scanf("%d", &matricula);

    int encontrado = 0;
    for (int i = 0; i < qtdAlunos; i++) {
        if (alunos[i].matricula == matricula) {
            printf("Novos dados para o aluno %s:\n", alunos[i].nome);
            pedirDados(&alunos[i]);
            encontrado = 1;
            //break;
        }else if (!encontrado) {
        printf("Aluno com matricula %d não encontrado.\n", matricula);
        }
    }

}

void removerAluno(struct aluno *alunos, int *qtdAlunos){
    int matricula;
    printf("Digite a matricula do aluno que deseja remover: ");
    scanf("%d", &matricula);

    int encontrado = 0;
    for (int i = 0; i < *qtdAlunos; i++) {
        if (alunos[i].matricula == matricula) {
            encontrado = 1;
            
            for (int j = i; j < (*qtdAlunos - 1); j++) { //for dentro de outro for
                alunos[j] = alunos[j + 1];
            }
            (*qtdAlunos)--;
            printf("Aluno com matricula %d removido com sucesso.\n", matricula);
            //break;
        }
    }

    if (!encontrado) {
        printf("Aluno com matricula %d não encontrado.\n", matricula);
    }
}

void buscarAlunoPorMatricula(struct aluno *alunos, int qtdAlunos){
    int matricula;
    printf("Digite a matricula do aluno que deseja buscar: ");
    scanf("%d", &matricula);

    int encontrado = 0;
    for (int i = 0; i < qtdAlunos; i++) {
        if (alunos[i].matricula == matricula) {
            printf("Aluno encontrado!\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Matricula: %d\n", alunos[i].matricula);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Aluno com matricula %d não encontrado.\n", matricula);
    }
}

void buscarAlunoPorNome(struct aluno *alunos, int qtdAlunos){
    char nome[120];
    printf("Digite o nome (ou parte dele) do aluno que deseja buscar: ");
    scanf(" %119[^\n]", nome);

    int encontrados = 0;
    for (int i = 0; i < qtdAlunos; i++) {
        if (strstr(alunos[i].nome, nome) != NULL) {
            if (!encontrados) {
                printf("Alunos encontrados:\n");
            }
            printf(" Nome: %s, Matricula: %d\n", alunos[i].nome, alunos[i].matricula);
            encontrados++;
        }
    }

    if (!encontrados) {
        printf("Nenhum aluno encontrado com o nome (ou parte dele) '%s'.\n", nome);
    }
}
