#include <stdio.h>

// Exercício 8 - Transformador de metros para dm, cm, e mm

int main() {
    float metro, decimetro, centimetro, milimetro;
    
    printf("Digite o valor em metros: ");
    scanf("%f", &metro);

    decimetro = metro * 10;
    centimetro = metro * 100;
    milimetro = metro * 1000;

    printf("Decímetro: %.0fdm\n", decimetro);
    printf("Centímetro: %.0fcm\n", centimetro);
    printf("Milímetro: %.0fmm\n", milimetro);

    return 0;
}