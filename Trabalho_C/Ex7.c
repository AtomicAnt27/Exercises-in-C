#include <stdio.h>

// Exercício 7 - Faça um programa que receba 5 números em um vetor de inteiros e imprima o vetor na ordem inversa que o usuário forneceu.

int main() {
    int vetor[5];
    int i;
    
    for(i=0; i<5; i++){
        printf("Digite os valores do vetor [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nVetor inverso: \n");
    for(i=4; i>=0; i--){
        printf("%d ", vetor[i]);
    }
    
    return 0;
}