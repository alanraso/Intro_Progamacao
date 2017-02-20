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

bool fimDoJogo(int M[5][5], int tam){
    int i=0, j=0;

    for(i; i<tam; i++){
        for (j=0; j<tam; j++){
            if (M[i][j]==1){
                return false;
            }
        }
    }

    return true;
}

int main (){
    int tam=5, lin, col;
    bool fim=false, desistiu=false;
    int M[5][5]={0,1,1,0,0,1,0,0,1,1,1,0,0,0,0,0,1,0,1,0,0,1,0,0,1};

    printf("Começo do jogo\n");
    printTable(M, tam);

    while(!fim && !desistiu){
        printf("\nFaça sua jogada! Digite a linha e a coluna. (0 0 para desistir)");
        scanf("%d %d",&lin, &col);
        printf("\n\n");
        if (lin==0 && col==0){
            desistiu=true;
            printf("Ah, que pena... :/");
        }else{
            jogada(lin, col, M);
            printTable(M, tam);
            if (fimDoJogo(M, tam)){
                fim=true;
                printf("Parabens!! Voce conseguiu!! =D");
            }
        }
    }

    return 0;
}
