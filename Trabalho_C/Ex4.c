#include <stdio.h>

// Exercício 4 - Escreva um programa que leia um número inteiro positivo e verifique se ele é um número primo.

int main() {
    int num, i, resultado = 0;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            resultado++;
            break;
        }
    }
    
    if(num > 0){
        printf("O número informado é positivo!\n");
        if (resultado == 0){
            printf("%d é um número primo.\n", num);
        }else{
            printf("%d não é um número primo.\n", num);
        }
    }else{
        printf("O número informado é negativo!\n");
    }
   
    return 0;
}