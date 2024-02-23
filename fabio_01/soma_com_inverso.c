#include <stdio.h>

int main() {
    int numero, inverso, soma;

    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%3d", &numero);

    inverso = (numero % 10) * 100 + ((numero / 10) % 10) * 10 + numero / 100;
    soma = numero + inverso;

    printf("A soma do número %d com seu inverso %d é: %d\n", numero, inverso, soma);

    return 0;
}
