#include <stdio.h>

int main() {
    int num1, num2, quociente, resto;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    quociente = num1 / num2;
    resto = num1 % num2;

    printf("O quociente da divisão é: %d\n", quociente);
    printf("O resto da divisão é: %d\n", resto);

    return 0;
}
