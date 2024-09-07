#include <stdio.h>
#include <stdlib.h>
#include "pilha_encadeada.h"

int main() {

    Pilha* minhaPilha = novaPilha();
    mostrarPilha();
    minhaPilha = push(minhaPilha, 15);
    minhaPilha = push(minhaPilha, 20);
    minhaPilha = push(minhaPilha, 30);
    mostrarPilha();
    minhaPilha = pop(minhaPilha);
    mostrarPilha();
}
