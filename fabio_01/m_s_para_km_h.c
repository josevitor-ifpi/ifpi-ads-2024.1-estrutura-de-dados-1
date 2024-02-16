#include <stdio.h>

int main() {
    //declaro as variáveis
    float velocidade_ms, velocidade_kmh;

    //Entrada
    printf("Digite a velocidade em metros por segundo (m/s): ");
    scanf("%f", &velocidade_ms);

    //Processamento
    velocidade_kmh = velocidade_ms * 3.6;

    //Saída
    printf("A velocidade em quilômetros por hora (km/h) é: %.2f\n", velocidade_kmh);

    return 0;
}
