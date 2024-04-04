#include <stdio.h>

// Exercício 13 - Sequência de Fibonacci

int main()
{
    int size, i, a = 0, b = 0, c = 1;
    printf("Digite o tamanho da sequência: ");
    scanf("%d", &size);
    for(i=0; i<size; i++){
        printf("%d\n", c);
        b = c;
        c += a;
        a = b;
    }
    return 0;
}