#include <stdio.h>

int main() {
    float distancia_km, distancia_m;

    printf("Digite a distância em quilômetros (km): ");
    scanf("%f", &distancia_km);

    distancia_m = distancia_km * 1000;

    printf("A distância em metros (m) é: %.2f\n", distancia_m);

    return 0;
}
