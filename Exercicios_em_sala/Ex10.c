#include <stdio.h>

// Exercício 10 - Checa se o valor está entre 0 e 10

int main()
{
    int nota;
    printf("Digite um valor entre 0 e 10: ");
    scanf("%d", &nota);

    while(nota > 10 || nota < 0){
        printf("Valor inválido! Digite um valor entre 0 e 10: ");
        scanf("%d", &nota);
    }
    return 0;
}