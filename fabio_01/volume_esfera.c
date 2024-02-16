#include <stdio.h>

int main() {
    float raio, volume;
    const float PI = 3.14; 

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4 * PI * raio * raio * raio) / 3;

    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}
