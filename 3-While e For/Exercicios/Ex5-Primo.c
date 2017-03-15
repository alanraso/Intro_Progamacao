/*
Dado um número inteiro positivo, verificar se ele eh primo
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
  int num, possivelDivisor = 2;
  bool ehPrimo = true;

  printf("Entre com um numero inteiro: ");
  scanf("%d", &num);

  if (num == 1) {
    ehPrimo = false;
  }

  while(possivelDivisor <= num/2 && ehPrimo == true) {
    if (num % possivelDivisor == 0) {
      ehPrimo = false;
    }
    possivelDivisor = possivelDivisor + 1;
  }

  printf("O numero %d ", num);

  if (ehPrimo) {
    printf("eh primo!");
  } else {
    printf("NAO eh primo!");
  }

  return 0;
}
