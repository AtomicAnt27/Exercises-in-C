#include <stdio.h>

// Exercício 18 - Celsius para Fahrenheit

int main() {
    float celsius, fahrenheit;
    printf("Digite o valor em celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("O valor em Fahrenheit é: %.0f°F", fahrenheit);

    return 0;
}