#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){

    Lista* minhaLista = novaLista();
    listar(minhaLista);
    minhaLista = inserirInicio(minhaLista, 11);
    minhaLista = inserirInicio(minhaLista, 13);
    minhaLista = inserirInicio(minhaLista, 22);
    listar(minhaLista);
    minhaLista = inserirFinal(minhaLista, 30);
    listar(minhaLista);
    
    return 0;
}

