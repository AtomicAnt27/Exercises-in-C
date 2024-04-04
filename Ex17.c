#include <stdio.h>

// Exercício 17 - Pega data de aniversário e imprime

int main() {
    int dia, mes, ano;
    printf("Entre com a data do seu aniversário (dd mm aa): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("\n");
    printf("Você nasceu em %d/%d/%d\n", dia, mes, ano);
    return 0;
}