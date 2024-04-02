#include <stdio.h>

int main()
{
    int valor;

    printf("Digite o valor do produto: ");
    scanf("%d", &valor);

    if (valor >= 100)
    {
        valor *= 1.2;
    }
    else
    {
        valor *= 1.1;
    }

    printf("Total inflacionado: R$%d", valor);

    return 0;
}