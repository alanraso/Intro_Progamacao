/*
Dado um inteiro n, imprimir os números múltiplos de 3 de 1 até n.
*/

#include <stdio.h>

int main() {
  int n, contador;

  printf("Entre com um numero inteiro: ");
  scanf("%d", &n);
  printf("Os multiplos de 3 de 1 a %d sao:\n", n);

  contador = 1;
  while (contador <= n) {
    if (contador % 3 == 0) {
      printf("%d ", contador);
    }
    contador = contador + 1;
  }

  return 0;
}