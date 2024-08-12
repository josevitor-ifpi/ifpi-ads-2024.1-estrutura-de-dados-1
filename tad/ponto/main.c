#include <stdio.h>
#include <stdlib.h>
#include "ponto.h" 

Ponto* cria (float x, float y);
void libera(Ponto* p);
void acessa(Ponto* p, float* x, float* y);
void atribui(Ponto* p, float x, float y);
float distancia (Ponto* p1, Ponto* p2);
void limparTela();

struct ponto {
float x;
float y;
};

int main(){
    Ponto *p1, *p2;
    float x, y;
    ponto = (struct ponto *)malloc(10 * sizeof(struct ponto));

    char menu[] = ">>> Geometria Analítica <<<\n1 - Criar Ponto 1\n2 - Criar Ponto 2\n3 - Liberar Pontos \n4 - Acessar Ponto 1\n5 - Atribuir Ponto 1\n6 - Acessar Ponto 2\n7 - Atribuir Ponto 2\n8 - calcular a distância entre dois pontos\n\n0 - Sair\n>>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while (opcao != 0){
        if (opcao == 1) {
            printf("Digite X Y: ");
            scanf("%f %f", &x, &y);
            p1 = cria(x, y);

        }else if (opcao == 2) {
            printf("Digite X Y: ");
            scanf("%f %f", &x, &y);
            p2 = cria(x, y);

        }else if (opcao == 3) {
            libera(p1);
            libera(p2);
            printf("Pontos com memória liberada!");

        } else if (opcao == 4) {
            acessa(p1, &x, &y);
            printf("Ponto P1(%.1f, %.1f)", x, y);

        } else if (opcao == 5) {
            printf("Digite X Y para atribuir ao Ponto 1: ");
            scanf("%f %f", &x, &y);
            atribui(p1, x, y);

        } else if (opcao == 6) {
            acessa(p2, &x, &y);
            printf("Ponto P2(%.1f, %.1f)", x, y);

        } else if (opcao == 7) {
            printf("Digite X Y para atribuir ao Ponto 2: ");
            scanf("%f %f", &x, &y);
            atribui(p2, x, y);

        }else if (opcao == 8) {
            float dist = distancia(p1, p2);
            printf("A distância entre P1 e P2 é: %.2f\n", dist);
        }
        printf("%s", menu);
        scanf("%d", &opcao);
        limparTela();
    }
}