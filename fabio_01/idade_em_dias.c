#include <stdio.h>

int main() {
    int anos, meses, dias, idade_dias;

    printf("Digite a idade em anos, meses e dias (por exemplo, 20 6 15): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    idade_dias = anos * 365 + meses * 30 + dias;

    printf("A idade expressa apenas em dias é: %d dias\n", idade_dias);

    return 0;
}