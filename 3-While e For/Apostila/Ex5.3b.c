// Dados dois números inteiros positivos, dizer se eles são primos entre si.
//Dois números são primos entre si se eles têm mdc igual a 1.

#include <stdio.h>
#include <stdbool.h>

int main(){

    int num1, num2, div = 2;
    bool primos_entre_si = true;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    for(div; div<=num1 && div<=num2; div++){
        if (num1%div==0 && num2%div==0){
            primos_entre_si = false;
        }
    }

    primos_entre_si ? printf("\n%d e %d sao primos entre si.\n", num1, num2) : printf("\n%d e %d nao sao primos entre si.\n", num1, num2);

    return 0;
}
