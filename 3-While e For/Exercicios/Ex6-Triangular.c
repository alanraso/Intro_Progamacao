/*
Dizemos que um número natural positivo é triangular se ele é o produto de três números inteiros consecutivos.
Ex: 60 é triangular porque é o produto entre 3, 4 e 5.
Dado um número natural positivo, dizer se ele é triangular e quais são os fatores.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
  int num, cont = 1, produto = 1;
  bool ehTriangular = false;

  printf("Entre com um numero inteiro positivo: ");
  scanf("%d", &num);

  while(produto < num && ehTriangular == false) {
    produto = cont*(cont + 1)*(cont + 2);

    if (produto == num) {
      ehTriangular = true;
    }

    cont = cont + 1;
  }

  printf("O numero %d ", num);

  if (ehTriangular) {
    printf("eh triangular!");
  } else {
    printf("NAO eh triangular!");
  }

  return 0;
}
