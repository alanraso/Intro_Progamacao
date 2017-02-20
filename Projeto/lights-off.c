#include <stdio.h>
#include <stdbool.h>


void printTable(int M[5][5], int tam){

    int i=0, j=0;

    for (i; i<tam; i++){
        printLinha(tam);
        j=0;
        for (j; j<tam; j++){
            if (M[i][j]==1){
                printf("| O ");
            }
            else{
                printf("|   ");
            }
        }
        printf("|\n");
    }
    printLinha(tam);
}

void printLinha(int tam){
    int i=0;
    for (i; i<tam; i++){
        printf("+---");
    }
    printf("+\n");
}

void jogada(int lin, int col, int M[5][5]){
    lin--;
    col--;
    M[lin][col] = M[lin][col]==1 ? 0 : 1;
    if (lin != 0){
         M[lin-1][col] = M[lin-1][col]==1 ?0 : 1;
    }
    if (lin != 4){
        M[lin+1][col] = M[lin+1][col]==1 ? 0 : 1;
    }
    if (col != 0){
        M[lin][col-1] = M[lin][col-1]==1 ? 0 : 1;
    }
    if (col != 4){
        M[lin][col+1] = M[lin][col+1]==1 ? 0 : 1;
    }
}

int main (){
    int tam=5;
    int M[5][5]={1,1,0,0,1,0,0,1,1,0,0,0,0,1,0,1,0,0,1,0,0,1,1,0,0};

    printTable(M, tam);
    jogada(1,1,M);
    printTable(M, tam);
    jogada(1,5,M);
    printTable(M, tam);
    jogada(5,1,M);
    printTable(M, tam);
    jogada(5,5,M);
    printTable(M, tam);
    jogada(2,3,M);
    printTable(M, tam);

    return 0;
}
