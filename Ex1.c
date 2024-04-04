#include <stdio.h>

// Exercício 1 - Imprime Vetor

int main() { 
    int vetor [] = {0,1,1,2,3,5,8,11};
    int x;
    for (x=0; x<8; x++) { 
        printf ("Vetor: %d \n", vetor[x]);
    }

    return 0;
}