#include <stdio.h>
#include <locale.h>

int main() {
  int num;

  printf("Entre com um numero inteiro: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("O numero digitado eh par!\n");
  } else {
    printf("O numero digitado eh impar!\n");
  }

  return 0;
}
