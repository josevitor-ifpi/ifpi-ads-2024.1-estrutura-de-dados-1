#include <stdio.h>

int main() {
    int minutos, dias, horas, minutos_restantes;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    dias = minutos / (24 * 60); // Um dia tem 24 * 60 = 1440 minutos
    minutos_restantes = minutos % (24 * 60);
    horas = minutos_restantes / 60;
    minutos_restantes %= 60;

    printf("%d minutos correspondem a %d dias, %d horas e %d minutos.\n", minutos, dias, horas, minutos_restantes);

    return 0;
}
