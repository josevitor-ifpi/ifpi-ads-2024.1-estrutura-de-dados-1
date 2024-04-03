#include <stdio.h>

int main() {
    int anos_fumando, cigarros_por_dia;
    float preco_carteira, dinheiro_gasto;

    scanf("%d %d %f", &anos_fumando, &cigarros_por_dia, &preco_carteira);

    dinheiro_gasto = (anos_fumando * 365 * cigarros_por_dia * preco_carteira) / 20;

    printf("%.2f\n", dinheiro_gasto);

    return 0;
}
