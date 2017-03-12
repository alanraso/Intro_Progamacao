/*Dada uma matriz de 0 e 1, dizer se ela é ou não matriz identidade, ou seja,
se todos os elementos da diagonal principal são 1 e todos os outros são 0.*/

#include <stdio.h>
#include <stdbool.h>
#define DIM 4

int main(){

    //Exemplo de matriz que nao eh identidade
    int matriz[DIM][DIM] = {1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1};

    //Exemplo de matriz identidade
    //int matriz[DIM][DIM] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};

    bool ehIdentidade = true;

    int i=0, j=0;

    for (i; i<DIM; i++){
        j=0;
        for (j; j<DIM; j++){
            if (i==j && matriz[i][j] != 1){
                ehIdentidade = false;
            }else if (i != j && matriz[i][j] != 0){
                ehIdentidade = false;
            }
        }
    }

    ehIdentidade ? printf("Eh matriz identidade") : printf("Nao eh matriz identidade");

    return 0;
}


