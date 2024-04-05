#include <stdio.h>

// Exercício 9 - Escreva um programa que imprima a primeira coluna da matriz 5x5.

int main() {
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {6, 8, 6, 6, 6},
        {5, 6, 3, 2, 1},
        {8, 9, 7, 0, 9}};
    int i, j;
    
    printf("\nMatriz 5x5 fornecida: \n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nPrimeira coluna da matriz: \n");
    for(i=0; i<5; i++){
        printf("%d ", matriz[i][0]);
    }
    
    return 0;
}