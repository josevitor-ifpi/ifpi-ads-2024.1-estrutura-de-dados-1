#include <stdio.h>

int main() {
    float nota1, nota2, nota3, peso1, peso2, peso3, media_ponderada;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &peso3);

    media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("A média ponderada do aluno é: %.2f\n", media_ponderada);

    return 0;
}
