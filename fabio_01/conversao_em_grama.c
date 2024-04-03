#include <stdio.h>

int main() {
    float peso_kg, peso_g;

    printf("Digite o peso em quilogramas (kg): ");
    scanf("%f", &peso_kg);

    peso_g = peso_kg * 1000;

    printf("O peso em gramas (g) é: %.2f\n", peso_g);

    return 0;
}
