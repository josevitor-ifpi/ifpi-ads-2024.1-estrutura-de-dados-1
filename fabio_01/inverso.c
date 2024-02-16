#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Os números em ordem inversa são: %.2f, %.2f\n", num2, num1);

    return 0;
}
