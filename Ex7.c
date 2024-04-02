#include <stdio.h>

int main() {
    int notas[5];
    int length = sizeof(notas) / sizeof(notas[0]);
    int i;
    float media, soma;
    
    for(i = 0; i < length; i++) {
        scanf(" %d", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma/length;

    printf("A média dos valores é: %.1f\n", media);
    return 0;
}