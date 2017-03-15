/*
Dada uma sequencia de numeros inteiros terminada em 0, dizer qual deles é o maior (desconsiderar o 0 final).
*/

#include <stdio.h>

int main() {
  int num, maior;

  printf("Entre com uma sequencia de numeros terminada em 0: ");
  scanf("%d", &num);
  maior = num;

  while(num != 0) {
    if (num > maior) {
      maior = num;
    }
    scanf("%d", &num);
  }

  printf("O maior numero eh %d", maior);

  return 0;
}