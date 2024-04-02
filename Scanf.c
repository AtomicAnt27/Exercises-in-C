#include <stdio.h>

int main(){
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("\n");
    printf("Você tem %d anos\n", idade);
    return 0;
}

int main() {
    int dia, mes, ano;
    printf("Entre com a data do seu aniversário (dd mm aa): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("\n");
    printf("Você nasceu em %d/%d/%d\n", dia, mes, ano);
    return 0;
}