#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite o valor da base do retângulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do retângulo: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}
