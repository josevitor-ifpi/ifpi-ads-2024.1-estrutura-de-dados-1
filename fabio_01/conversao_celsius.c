#include <stdio.h>

int main() {
    float temperatura_F, temperatura_C;

    printf("Digite a temperatura em graus Fahrenheit (°F): ");
    scanf("%f", &temperatura_F);

    temperatura_C = (5 * temperatura_F - 160) / 9;

    printf("A temperatura em graus Celsius (°C) é: %.2f\n", temperatura_C);

    return 0;
}
