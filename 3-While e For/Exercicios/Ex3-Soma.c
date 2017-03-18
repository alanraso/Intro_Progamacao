/*
Dada uma sequência de números inteiros positivos terminada em 0, imprimir a soma desses números
*/

#include <stdio.h>

int main() {
  int num, soma = 0;

  printf("Entre com uma sequencia de numeros terminada em 0: ");
  scanf("%d", &num);

  while(num != 0) {
    soma = soma + num;
    scanf("%d", &num);
  }

  printf("A soma dos numeros eh %d", soma);

  return 0;
}