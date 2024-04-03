#include <stdio.h>

int main() {
    float raio, comprimento;
    const float pi = 3.14; 

    printf("Digite o valor do raio da circunferência: ");
    scanf("%f", &raio);

    comprimento = 2 * pi * raio;

    printf("O comprimento da circunferência é: %.2f\n", comprimento);

    return 0;
}
