/*
  Dado a nota de um aluno, dizer se ele está aprovado (10-5), em recuperação (4.9-3) ou reprovado
  (2.9-0). No caso de recuperação, mostre também o quanto ele precisa tirar pra ser aprovado (a média
  final é a média entre as duas notas).
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
  float nota, precisaTirar;

  printf("Entre com a nota de um aluno: ");
  scanf("%f", &nota);

  if (nota >= 5 && nota <= 10) {
    printf("O aluno esta aprovado.\n");
  } else if (nota >= 3 && nota < 5) {
    precisaTirar = 10 - nota;
    printf("O aluno esta de recuperacao e precisa tirar %.2f para ser aprovado.\n",  precisaTirar);
  } else if (nota >= 0 && nota < 3) {
    printf("O aluno esta reprovado.\n");
  }

  return 0;
}
