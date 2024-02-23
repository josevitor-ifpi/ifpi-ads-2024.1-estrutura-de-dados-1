#include <stdio.h>

int main() {
    float metros, centimetros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("O valor em centimetros é: %.2f cm\n", centimetros);

    return 0;
}
