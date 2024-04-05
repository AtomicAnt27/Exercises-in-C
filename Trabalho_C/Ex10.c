#include <stdio.h>

// Exercício 10 - Escreva um programa que informe a soma de todos os elementos da matriz anterior.

int main() {
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {6, 8, 6, 6, 6},
        {5, 6, 3, 2, 1},
        {8, 9, 7, 0, 9}};
    int i, j, soma = 0;
    
    printf("\nMatriz 5x5 fornecida: \n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d ", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }
    
    printf("\nSoma de todos os valores da matriz: \n");
    printf("%d", soma);
    
    return 0;
}