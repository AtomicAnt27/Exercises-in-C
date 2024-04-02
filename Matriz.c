#include <stdio.h>

int main() {
    // Declara uma matriz de inteiros com 3 linhas e 2 colunas
    int matriz[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d", matriz[i][j]);
        }
    }
    return 0;
}