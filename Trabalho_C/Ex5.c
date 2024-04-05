#include <stdio.h>

// Exercício 5 - Faça um programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno. Dicas: Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro; Triângulo Equilátero: três lados iguais; Triângulo Isósceles: quaisquer dois lados iguais; Triângulo Escaleno: três lados diferentes;

int main() {
    float lad1, lad2, lad3;
    printf("Informe o valor do 1° lado: ");
    scanf("%f", &lad1);
    printf("Informe o valor do 2° lado: ");
    scanf("%f", &lad2);
    printf("Informe o valor do 3° lado: ");
    scanf("%f", &lad3);
    
    if(lad1 + lad2 > lad3 && lad1 + lad3 > lad2 && lad2 + lad3 > lad1){
        if(lad1 == lad2 && lad2 == lad3){
            printf("O triângulo é equilátero!");
        }else if(lad1 == lad2 || lad2 == lad3 || lad3 == lad1){
            printf("O triângulo é isósceles!");
        }else if(lad1 != lad2 != lad3){
            printf("O triângulo é escaleno!");
        }
    }else{
        printf("Não é possível formar um triângulo!");
    }
   
    return 0;
}