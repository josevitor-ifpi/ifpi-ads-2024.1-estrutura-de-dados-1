#include "pilha_sequencial.h"
#include <stdio.h>

int main() {
    
    Stack* minhaPilha = new_stack();
    
    show_stack(minhaPilha, "Pilha Inicial");
    show_stack(minhaPilha, "Pilha após Push");
    pop(minhaPilha);
    show_stack(minhaPilha, "Pilha após Pop");
    free(minhaPilha);

    return 0;
}