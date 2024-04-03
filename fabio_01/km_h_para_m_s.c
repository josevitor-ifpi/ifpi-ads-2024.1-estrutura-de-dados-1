#include <stdio.h>

int main() {
    float velocidade_kmh, velocidade_ms;

    printf("Digite a velocidade em quilômetros por hora (km/h): ");
    scanf("%f", &velocidade_kmh);

    velocidade_ms = velocidade_kmh / 3.6;

    printf("A velocidade em metros por segundo (m/s) é: %.2f\n", velocidade_ms);

    return 0;
}
