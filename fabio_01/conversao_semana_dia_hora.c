#include <stdio.h>

int main() {
    int horas, semanas, dias, horas_restantes;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    semanas = horas / 168; // Uma semana tem 168 horas
    horas_restantes = horas % 168;
    dias = horas_restantes / 24; // Um dia tem 24 horas
    horas_restantes %= 24;

    printf("%d horas correspondem a %d semanas, %d dias e %d horas.\n", horas, semanas, dias, horas_restantes);

    return 0;
}
