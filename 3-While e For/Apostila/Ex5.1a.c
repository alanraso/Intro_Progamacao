#include <stdio.h>

//Dado um número inteiro positivo n, imprimir os números ímpares de 1 a n.

int main() {
  int n, contador;

  printf("Entre com um numero inteiro: ");
  scanf("%d", &n);
  printf("Os numeros impares de 1 a %d sao:\n", n);

  contador = 1;
  while (contador <= n) {
    printf("%d ", contador);
    contador = contador + 2;
  }

  return 0;
}
