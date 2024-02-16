#include <stdio.h>

int main() {
    float valor_dolar, valor_em_dolar, valor_em_real;

    printf("Digite o valor do dólar em reais: ");
    scanf("%f", &valor_dolar);

    printf("Digite o valor em dólar: ");
    scanf("%f", &valor_em_dolar);

    valor_em_real = valor_dolar * valor_em_dolar;

    printf("O valor em reais é: R$ %.2f\n", valor_em_real);

    return 0;
}