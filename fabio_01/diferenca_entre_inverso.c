#include <stdio.h>

int main() {
    int numero, inverso, diferenca;

    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%3d", &numero);

    inverso = (numero % 10) * 100 + ((numero / 10) % 10) * 10 + numero / 100;
    diferenca = numero - inverso;

    printf("A diferença entre o número %d e seu inverso %d é: %d\n", numero, inverso, diferenca);

    return 0;
}
