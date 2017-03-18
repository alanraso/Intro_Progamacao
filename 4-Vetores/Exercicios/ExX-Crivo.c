/*
O vetor crivo eh o vetor que guarda os numeros primos de forma consecutiva.
O vetor crivo de tamanho 3, por exemplo, guarda os numeros 2, 3 e 5.
Construa o vetor crivo de tamanho 20 e imprima na tela.
*/

#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int main() {
  int crivo[100], i = 1, numero = 3, possivelDivisor;
  bool ehPrimo;

  crivo[0] = 2;

  while (i < 20) {
      ehPrimo = true;
      possivelDivisor = 2;
      while(possivelDivisor <= numero/2 && ehPrimo == true) {
        if (numero % possivelDivisor == 0) {
          ehPrimo = false;
        }

        possivelDivisor++;
      }

      if (ehPrimo) {
        crivo[i] = numero;
        i++;
      }

      numero++;
  }

  for (i = 0; i < 20; i++) {
    printf("%d ", crivo[i]);
  }

  return 0;
}
