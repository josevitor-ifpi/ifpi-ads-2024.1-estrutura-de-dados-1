#include <stdio.h>

void troca (int *pa, int *pb){
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main (void){
    
    int a = 5;
    int b = 7;

    troca(&a, &b);
    printf("%d %d", a, b);
    return 0;

}