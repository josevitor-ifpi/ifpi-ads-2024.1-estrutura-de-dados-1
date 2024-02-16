#include <stdio.h>

int main() {
    float num1, num2, soma, subtracao, resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;

    return 0;
}
