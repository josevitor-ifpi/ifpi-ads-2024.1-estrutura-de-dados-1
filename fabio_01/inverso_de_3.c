#include <stdio.h>

int main() {
    int numero, inverso, centena, dezena, unidade;

    printf("Digite um número inteiro de três dígitos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    inverso = unidade * 100 + dezena * 10 + centena;

    printf("O inverso do número é: %d\n", inverso);

    return 0;
}
