/*
Dado o salário de um contribuinte, verificar qual o desconto do INSS baseado na tabela fictícia abaixo:

            Faixa salarial                      Desconto
  ---------------------------------------------------------------
        abaixo de R$ 1500,00                     isento
        entre R$ 1500,00 e R$ 2200,00              7%
        entre R$ 2200,00 e R$ 3000,00              12,5%
        entre R$ 3000,00 e R$ 3800,00              15%
        acima de R$ 3800,00                        20%

*/

#include <stdio.h>

int main() {
  float salario, percentual;

  printf("Entre com o salario: ");
  scanf("%f", &salario);

  if (salario <= 0) {
    printf ("Salario invalido.\n");
    return 0;
  }

  if (salario <= 1500) {
    percentual = 0;
  } else if (salario > 1500 && salario <= 2200) {
    percentual = 7;
  } else if (salario > 2200 && salario <= 3000) {
    percentual = 12.5;
  } else if (salario > 3000 && salario <= 3800) {
    percentual = 15;
  } else if (salario > 3800) {
    percentual = 20;
  }

  if (percentual == 0) {
    printf("Contribuinte isento do imposto de renda.\n");
  } else {
    printf("O desconto (de %.1f %%) do contribuinte eh de R$ %.2f.\n", percentual, percentual/100.0*salario);
  }

  return 0;
}
