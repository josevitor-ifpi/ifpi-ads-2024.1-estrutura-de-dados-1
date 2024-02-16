#include <stdio.h>

int main() {
    float salario, novo_salario;

    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);

    novo_salario = salario * 1.25;

    printf("O novo salário com um aumento de 25%% é: %.2f\n", novo_salario);

    return 0;
}
