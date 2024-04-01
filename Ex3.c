int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int x;
    for (x=0; x<12; x++) {
        if (vetor[x] %2 == 0) {
            printf("Esses números são pares: %d \n", vetor[x]);
        }
    }

    return 0;
}