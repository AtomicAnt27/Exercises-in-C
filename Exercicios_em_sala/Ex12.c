#include <stdio.h>

// Exercício 12 - Cálculo de potenciação sem a função matemática

int main()
{
    int base, exp, result = 1, i;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &exp);
    for(i = 0; i < exp; i++){
        result *= base;
    }
    printf("Resultado: %d", result);
    
    return 0;
}