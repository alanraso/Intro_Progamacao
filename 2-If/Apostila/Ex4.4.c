/*
  Dados 3 números inteiros positivos, imprimi-los em ordem crescente.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
  int num1, num2, num3;
  int menor, meio, maior;

  printf("Entre com tres numeros inteiros: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  maior = num1;

  if (num2 > maior) {
    maior = num2;
  }
  if (num3 > maior) {
    maior = num3;
  }

  menor = num1;

  if (num2 < menor) {
    menor = num2;
  }
  if (num3 < menor) {
    menor = num3;
  }

  if ((maior == num1 && menor == num2) || (maior == num2 && menor == num1)) {
    meio = num3;
  } else if ((maior == num1 && menor == num3) || (maior == num3 && menor == num1)) {
    meio = num2;
  } else if ((maior == num2 && menor == num3) || (maior == num3 && menor == num2)) {
    meio = num1;
  }

  printf("A ordem dos numeros eh %d %d %d", menor, meio, maior);

  return 0;
}
