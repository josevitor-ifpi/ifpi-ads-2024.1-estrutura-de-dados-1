#include <stdio.h>

int main() {
    int horas, minutos, total_minutos;

    printf("Digite o valor em horas: ");
    scanf("%d", &horas);

    printf("Digite o valor em minutos: ");
    scanf("%d", &minutos);

    total_minutos = horas * 60 + minutos;

    printf("O equivalente em minutos é: %d\n", total_minutos);

    return 0;
}
