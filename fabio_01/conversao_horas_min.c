#include <stdio.h>

int main() {
    int minutos, horas, minutos_restantes;

    printf("Digite o valor em minutos: ");
    scanf("%d", &minutos);

    horas = minutos / 60;
    minutos_restantes = minutos % 60;

    printf("O equivalente em horas e minutos é: %d horas e %d minutos.\n", horas, minutos_restantes);

    return 0;
}
