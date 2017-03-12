//Dada uma matriz, criar outra matriz com linhas e colunas invertidas (ou seja, a transposta desta matriz) e imprima-la.

#include <stdio.h>
#define DIM 4

int main (){

    int matriz[DIM][DIM] = {4, 6, 8, 9 ,2 , 4, 3, 6, 5, 7, 9, 9, 1, 6, 5, 7};
    int transposta [DIM][DIM];

    int i=0, j=0;

    for(j; j<DIM; j++){
        i=0;
        for(i; i<DIM; i++){
            transposta [j][i] = matriz[i][j];
            printf("%d ", transposta [j][i]);
        }
        printf("\n");
    }
    return 0;
}
