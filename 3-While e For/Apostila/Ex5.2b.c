
//Dados um n�mero inteiro positivo n e um n�mero inteiro n�o-negativo p, calcular n^p

#include<stdio.h>

int main(){

    int p, n, res=1;

    printf("Vamos calcular p^n.\nPrimeiro digite p e n: ");
    scanf("%d %d", &p, &n);

    if (n != 0 && p != 1){
        for (n; n>0; n--){
            res = res*p;
        }
    }

    printf("p^n = %d\n", res);

    return 0;
}
