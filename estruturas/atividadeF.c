#include <stdio.h>

// typedef; definir tipo de função
// permite criar novos tipos
// útil para abreviar nomes de tipo
// definição de nomes de tipos para estruturas

// TAD; tipo abstrato de dados

typedef struct ponto {
    int x;
    int y;
} Ponto;
// o nome ponto após struct é facultavivo

typedef struct circulo {
 Ponto p1;
 int raio;
} Circulo; 


int main(){
// 1° questão
Ponto p1;

printf("Valor de X: ");
scanf("%d", &p1.x);

printf("Valor de Y: ");
scanf("%d", &p1.y);

printf("Os valores digitados para X:%d e Y:%d", p1.x, p1.y);

// 2° questão
Circulo c1;

printf("Valor do Raio: ");
scanf("%d", &c1.raio);

}