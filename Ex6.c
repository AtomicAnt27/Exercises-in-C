#include <stdio.h>

// Exercício 6 - Imprime Maior, Menor e a Média dos valores do vetor

int main() {
    int vetor[10];
    int length = sizeof(vetor) / sizeof(vetor[0]);
    float media, soma = 0;
    int i, j, max=0, min=length;
    printf("Digite 10 números: \n");

    for(i = 0; i < length; i++) {
        scanf(" %d", &vetor[i]);
        soma = soma + vetor[i];
    }

    media = soma/length;
    
    for(j = 0; j < length; j++) 
    {
        if(vetor[j] > max) {
            max = vetor[j];
        }
        if(vetor[j] < min){
            min = vetor[j];
        }
    }
    printf("O maior valor é: %d\n", max);
    printf("O menor valor é: %d\n", min);
    printf("A média dos valores é: %.1f\n", media);
    return 0;
}