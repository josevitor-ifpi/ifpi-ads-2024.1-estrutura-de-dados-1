#include <stdio.h> // input e output
#include <stdlib.h> // usar o malloc e sizeof

// typedef; definir tipo de função
// permite criar novos tipos
// útil para abreviar nomes de tipo
// definição de nomes de tipos para estruturas

// TAD; tipo abstrato de dados

typedef struct ponto {
    int x;
    int y;
} Ponto;
// o nome "ponto" após struct é facultavivo

typedef struct circulo {
 Ponto p1;
 int raio;
} Circulo; 

//Funções

// 4° quesão
void mostraCirculo(Circulo *c) {
    printf("Centro do circulo: (%d, %d)\n", c->p1.x, c->p1.y);
    printf("Raio do circulo: %d\n", c->raio);
}

// 5° questão
void atribuiAleatorio(Circulo *c){
    // ??
}

// 7° questão
// ??

// 8° questão
// ??


int main(){
// 1° questão
Ponto p1;

printf("\nValor de X: ");
scanf("%d", &p1.x);

printf("Valor de Y: ");
scanf("%d", &p1.y);

printf("Os valores digitados para X:%d e Y:%d\n", p1.x, p1.y);


// 2° questão
Circulo c1;

printf("\nValor do Raio: ");
scanf("%d", &c1.raio);

printf("Valor de X: ");
scanf("%d", &c1.p1.x);

printf("Valor de Y: ");
scanf("%d", &c1.p1.y);

printf("Valores digitados para o circulo C1:\n");
mostraCirculo(&c1);
// printf("Valor do raio para C1: %d\n", c1.raio);
// printf("Os valores digitados para X:%d e Y:%d\n", c1.p1.x, c1.p1.y);


// 3° questão
Circulo *c2;

c2 = (Circulo*)malloc(sizeof(Circulo));

printf("\nDigite o valor do raio para o circulo 2: ");
scanf("%d", &(c2->raio));

printf("Digite o valor de X para o circulo 2: ");
scanf("%d", &(c2->p1.x));

printf("Digite o valor de Y para o circulo 2: ");
scanf("%d", &(c2->p1.y));

printf("Valores digitados para o circulo C2:\n");
mostraCirculo(c2);
// printf("Valor do raio para C2: %d\n", c1.raio);
// printf("Os valores digitados para X:%d e Y:%d\n", c2->p1.x, c2->p1.y);


// 6° questão
Circulo *c3;

c3 = &c1;

c3->p1.x = 50;
c3->p1.y = 50;
c3->raio = 25;

printf("\nValores do círculo C1 após alterações em C3:\n");
mostraCirculo(&c1);
printf("\nValores do círculo C3:\n");
mostraCirculo(c3);


free(c2);

return 0;
}