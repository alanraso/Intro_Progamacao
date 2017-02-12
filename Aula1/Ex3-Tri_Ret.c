/*
  Dados dois inteiros positivos seguidos de um terceiro, decidir se é possível formar um triângulo retângulo
  com os dois primeiros números como catetos e o terceiro como hipotenusa.
*/

#include <stdio.h>

int main() {
  int cateto1, cateto2, hipotenusa;

  printf("Entre com dois catetos e a hipotenusa (apenas positivos): ");
  scanf("%d %d %d", &cateto1, &cateto2, &hipotenusa);

  if (cateto1*cateto1 + cateto2*cateto2 == hipotenusa*hipotenusa) {
    printf("Essa combinacao pode formar um triangulo retangulo :)\n");
  } else {
    printf("Essa combinacao nao pode formar um triangulo retangulo :(\n");
  }

  return 0;
}