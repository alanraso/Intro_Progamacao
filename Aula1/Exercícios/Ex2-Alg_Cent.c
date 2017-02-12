/*
  Dado um número inteiro de três algarismos, verificar se o primeiro dígito é divisível por 3.
*/

#include <stdio.h>

int main() {
  int n, centena;

  printf("Entre com um inteiro de tres algarismos: ");
  scanf("%d", &n);

  centena = n/100;

  if (n < 100 || n > 999) {
    printf("O numero digitado nao eh de tres algarismos.\n");
  } else if (centena % 3 == 0) {
    printf("O algarismo da centena eh divisivel por 3 :)\n");
  } else {
    printf("O algarismo da centena nao eh divisivel por 3 :(\n");
  }

  return 0;
}