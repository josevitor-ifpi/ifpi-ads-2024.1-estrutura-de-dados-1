#include <stdio.h>

int main() {
    int metros, km, metros_restantes;

    printf("Digite a quantidade de metros: ");
    scanf("%d", &metros);

    km = metros / 1000;
    metros_restantes = metros % 1000;

    printf("%d metros correspondem a %d km e %d metros.\n", metros, km, metros_restantes);

    return 0;
}
