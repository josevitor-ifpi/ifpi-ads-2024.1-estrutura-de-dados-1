#include <stdio.h>

int main() {
    float num1, num2, num3, soma, diferenca;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    soma = num1 + num2;
    diferenca = num2 - num3;

    printf("A soma dos dois primeiros números é: %.2f\n", soma);
    printf("A diferença entre os dois últimos números é: %.2f\n", diferenca);

    return 0;
}
