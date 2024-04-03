#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um número inteiro de 4 dígitos: ");
    scanf("%d", &numero);

    soma += numero % 10; 
    soma += (numero / 10) % 10; 
    soma += (numero / 100) % 10; 
    soma += numero / 1000;

    printf("A soma dos elementos do número %d é: %d\n", numero, soma);

    return 0;
}
