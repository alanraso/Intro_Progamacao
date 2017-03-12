//Dada uma matriz 4x4, zerar todos os elementos da matriz e imprimi-la.

#include <stdio.h>
#define DIM 4

int main(){
    int matriz[DIM][DIM] = {4, 5, 6, 85, 7, 22, 38, 4, 2 ,16, 9 ,44 ,5 ,78, 15 , 21};

    int i=0, j=0;

    for(i; i<DIM; i++){
        j=0;
        for (j; j<DIM; j++){
            matriz[i][j]=0;
        }
    }

    i=0;

    for(i; i<DIM; i++){
        j=0;
        for (j; j<DIM; j++){
            printf("%d " ,matriz[i][j]);
        }
        printf("\n");
    }
}
