/*
  Dado um número inteiro positivo n maior do que 7, verificar se o número é divisível por 2, por 3 e
  por 6.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
  int num;
  bool ehPor2, ehPor3;

  printf("Entre com um umero inteiro maior do que 7: ");
  scanf("%d", &num);

  ehPor2 = num % 2 == 0;
  ehPor3 = num % 3 == 0;

  if (ehPor2 && ehPor3) {
    printf("%d eh divisivel por 2, 3 e 6.", num);
  } else if (ehPor2) {
    printf("%d eh divisivel por 2 mas nao eh divisivel por 3 e por 6.", num);
  } else if (ehPor3) {
    printf("%d eh divisivel por 3 mas nao eh divisivel por 2 e por 6.", num);
  } else {
    printf("%d nao eh divisivel nem por 2, nem por 3 e nem por 6.", num);
  }

  return 0;
}
