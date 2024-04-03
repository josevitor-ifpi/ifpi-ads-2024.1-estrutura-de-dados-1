#include <stdio.h>

int main() {
    float temperatura_C, temperatura_F;

    printf("Digite a temperatura em graus Celsius (°C): ");
    scanf("%f", &temperatura_C);

    temperatura_F = (9 * temperatura_C + 160) / 5;

    printf("A temperatura em graus Fahrenheit (°F) é: %.2f\n", temperatura_F);

    return 0;
}
