//Dada uma matriz e uma posição i, j, dizer qual elemento dessa posição e os elementos adjacentes.


#include <stdio.h>
#include <stdbool.h>
#define DIM 4

int main (){

    int matriz[DIM][DIM] = {4, 6, 8, 9 ,2 , 4, 3, 6, 5, 7, 9, 9, 1, 6, 5, 7};
    int lin=1, col=1;
    bool continuar = true;

    int i=0, j=0;
    for(i;i<DIM;i++){
        j=0;
        for(j;j<DIM;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    while (continuar){
        printf("\nDigite o numero da linha e coluna: (entre 1 e 4 e 0 0 para terminar)");
        scanf("%d %d", &lin, &col);

        if(lin==0 && col==0){continuar = false;}

        lin = lin - 1;
        col = col - 1; //o usuario normalmente comeca a contagem a partir de 1

        if (lin<0 || col<0 || lin >= 4 || col>=4 ){
            if (continuar){
                printf("Posicao invalida\n");
            }else{
                printf("Terminar\n");
            }
        }else{

            printf("O elemento dessa posicao eh %d\n", matriz[lin][col]);

            if (lin == 0){
                printf("Sem posicao acima\n");
                printf("O elemento da posicao abaixo eh %d\n", matriz[lin+1][col]);
            }else if (lin == 3){
                printf("O elemento da posicao acima eh %d\n", matriz[lin-1][col]);
                printf("Sem posicao abaixo\n");
            }else{
                printf("O elemento da posicao acima eh %d\n", matriz[lin-1][col]);
                printf("O elemento da posicao abaixo eh %d\n", matriz[lin+1][col]);
            }

            if (col == 0){
                printf("Sem posicao a esquerda\n");
                printf("O elemento da posicao a direita eh %d\n", matriz[lin][col+1]);
            }else if (col == 3){
                printf("O elemento da posicao a esquerda eh %d\n", matriz[lin][col-1]);
                printf("Sem posicao a direita\n");
            }else{
                printf("O elemento da posicao a direita eh %d\n", matriz[lin][col+1]);
                printf("O elemento da posicao a esquerda eh %d\n", matriz[lin][col-1]);
            }

        }
    }
    return 0;
}
