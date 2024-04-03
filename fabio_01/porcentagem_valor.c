#include <stdio.h>

int main() {
    float valor_real, valor_setenta_porcento;

    printf("Digite um valor em reais (R$): ");
    scanf("%f", &valor_real);

    valor_setenta_porcento = valor_real * 0.7;

    printf("70%% do valor é: R$ %.2f\n", valor_setenta_porcento);

    return 0;
}
