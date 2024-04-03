#include <stdio.h>

int main()
{
    float pop_A = 80000, pop_B = 200000;
    int anos = 0;
    while(1){
        anos++;
        pop_A *= 1 + (3.0 / 100);
        pop_B *= 1 + (1.5 / 100);
        if (pop_A >= pop_B){
            printf("A população de A passou da população de B num período de %d anos", anos);
            printf("\nPopulação de A: %.0f\nPopulação de B: %.0f", pop_A, pop_B);
            break;
        }
    }

    return 0;
}