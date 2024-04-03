#include <stdio.h>

int main() {
    int dias, semanas, dias_restantes;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    semanas = dias / 7;
    dias_restantes = dias % 7;

    printf("%d dias correspondem a %d semanas e %d dias.\n", dias, semanas, dias_restantes);

    return 0;
}
