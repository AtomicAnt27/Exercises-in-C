#include <stdio.h>

// Exercício 6 - Crie um programa que peça para o usuário informar os números de uma matriz 3x3 e imprima os números fornecidos.

int main() {
    int matriz[3][3];
    int i, j;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite os valores da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz 3x3 fornecida: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}