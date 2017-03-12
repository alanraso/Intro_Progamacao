//Dada uma matriz 3x3, criar outra matriz com os valores correspondentes aos módulos da primeira e imprimir essa matriz.

#include <stdio.h>
#define DIM 3

int main(){

    int matriz[DIM][DIM] = {-7, 5, 2, -6, 0, 8, 9, -2, -3};

    int i=0, j=0;

    for (i; i<DIM; i++){
        j=0;
        for (j; j<DIM; j++){
            if (matriz[i][j] < 0){
                matriz[i][j] = matriz[i][j] * (-1);
            }
        }
    }

    i=0;
    j=0;

    for (i; i<DIM; i++){
        j=0;
        for (j; j<DIM; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
