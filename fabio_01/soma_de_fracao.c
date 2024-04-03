#include <stdio.h>

int main() {
    int num1, den1, num2, den2, soma_num, soma_den;

    printf("Digite o numerador e o denominador da primeira fração (por exemplo, 1 2): ");
    scanf("%d %d", &num1, &den1);

    printf("Digite o numerador e o denominador da segunda fração (por exemplo, 1 2): ");
    scanf("%d %d", &num2, &den2);

    soma_num = num1 * den2 + num2 * den1;
    soma_den = den1 * den2;

    printf("A soma das frações é: %d/%d\n", soma_num, soma_den);

    return 0;
}
