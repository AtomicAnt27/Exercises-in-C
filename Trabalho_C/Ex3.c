#include <stdio.h>

// Exercício 3 - Escreva um programa que leia uma temperatura em graus Celsius e a converta para Fahrenheit, exibindo o resultado.

int main() {
    float celsius, fahrenheit;
    printf("Digite o valor em celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("O valor em Fahrenheit é: %.1f°F", fahrenheit);

    return 0;
}