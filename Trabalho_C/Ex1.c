#include <stdio.h>

// Exercício 1 - Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar. Dica: utilize o operador módulo.

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if(num %2 == 0){
        printf("Este número é par!");
    } else {
        printf("Este número é ímpar!");
    }

    return 0;
}