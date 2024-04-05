#include <stdio.h>

// Exercício 2 - Escreva um programa que calcule e exiba a soma dos n primeiros números naturais, onde n é fornecido pelo usuário.

int main() {
    int n, soma, i;
    printf("Digite a quantidade de números a serem somados: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d\n", i);
        soma += i;
    }
    printf("Soma: %d", soma);
    
    return 0;
}