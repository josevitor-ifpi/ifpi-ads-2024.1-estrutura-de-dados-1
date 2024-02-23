#include <stdio.h>

int main() {
    int binario, decimal = 0;

    printf("Digite um número binário de 4 dígitos: ");
    scanf("%4d", &binario);

    decimal = (binario / 1000) * 8 + ((binario % 1000) / 100) * 4 + ((binario % 100) / 10) * 2 + (binario % 10) * 1;

    printf("O número binário %d em decimal é: %d\n", binario, decimal);

    return 0;
}
