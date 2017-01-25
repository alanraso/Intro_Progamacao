/*
  Dados o peso e a altura de uma pessoa, dizer qual o estado de obesidade baseada no IMC e nas faixas de valores abaixo:

          Condição              IMC
---------------------------------------------
          Abaixo do peso      < 18,5
          Peso normal         18,5-24,9
          Pré-obeso           25,0 a 29,9
          Obeso               >= 30,0

  Fonte: http://www.abeso.org.br/pdf/diretrizes_brasileiras_obesidade_2009_2010_1.pdf
*/

#include <stdio.h>

int main() {
  float peso, altura, imc;

  printf("Entre com o peso e a altura, respectivamente: ");
  scanf("%f %f", &peso, &altura);

  imc = peso/(altura*altura);

  printf("\nSeu IMC eh %.2f\nVoce eh considerado como ", imc);

  if (imc < 18.5) {
    printf("abaixo do peso.");
  } else if (imc >= 18.5 && imc < 25) {
    printf("peso normal.");
  } else if (imc >= 25 && imc < 30) {
    printf("pre-obeso.");
  } else if (imc >= 30) {
    printf("obeso.");
  }

  printf("\n");

  return 0;
}