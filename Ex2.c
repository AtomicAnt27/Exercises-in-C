#include <stdio.h>

int main (){
    float vetor[] = {1.0,2.0,3.0,4.0,5.0};
    int x;
    for (x=0; x<5; x++) {
        printf ("Vetor: %.1f \n", vetor[x]);
    }

    return 0;
}