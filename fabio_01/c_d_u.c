#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, soma;

    printf("Digite um número inteiro de três dígitos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    soma = centena + dezena + unidade;

    printf("A soma dos elementos é: %d\n", soma);

    return 0;
}
