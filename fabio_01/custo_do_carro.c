#include <stdio.h>

int main() {
    float custo_fabrica, custo_consumidor;
    const float percentagem_distribuidor = 0.28;
    const float impostos = 0.45;

    scanf("%f", &custo_fabrica);

    custo_consumidor = custo_fabrica * (1 + percentagem_distribuidor + impostos);

    printf("%.2f\n", custo_consumidor);

    return 0;
}
