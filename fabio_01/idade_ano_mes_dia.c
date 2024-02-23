#include <stdio.h>

int main() {
    int idade_dias, anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &idade_dias);

    anos = idade_dias / 365;
    meses = (idade_dias % 365) / 30;
    dias = (idade_dias % 365) % 30;

    printf("A idade expressa em anos, meses e dias é: %d anos, %d meses e %d dias.\n", anos, meses, dias);

    return 0;
}
