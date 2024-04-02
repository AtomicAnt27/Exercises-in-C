#include <stdio.h>

int main(){
    int vetor[] = {6,8,1,5,9,2,7,3,4};
    int length = sizeof(vetor) / sizeof(vetor[0]);
    int i;
    int j;
    int auxiliar;
    
    for(i=0; i<length; i++) {
        for(j=i+1; j<length; j++){
            if(vetor[i] > vetor[j]){
                auxiliar = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }
    printf("\n");
    for(i=0; i<length; i++){
        printf("Vetor: %d\n", vetor[i]);
    }
    return 0;
}