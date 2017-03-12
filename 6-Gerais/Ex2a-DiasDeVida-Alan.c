#include <stdio.h>
#include <stdbool.h>

/* Dada uma data de nascimento no formado (dd mm aaaa), calcular a idade da pessoa, o dia da semana que ela nasceu e a quantidade de dias que ela viveu.
Você pode considerar como entrada a data de hoje.

Link para conferir se está certo: http://www.multicalculadora.com.br/calculadora-de-aniversario/
*/

#define DIA_SEMANA_HOJE 2

bool ehMesCom30(int mes) {
  return mes == 4 || mes == 6 || mes == 9 || mes == 11;
}

bool ehMesCom31(int mes) {
  return mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12;
}

bool ehFevereiro(int mes) {
  return mes == 2;
}

bool ehAnoBissexto(int ano) {
  return ano % 4 == 0;
}

int decrementoMes(int mes) {
  if (mes != 1) {
    return mes - 1;
  }

  return 12;
}

int decrementoDia(int dia, int mes, int ano) {
  if (dia != 1) {
    return dia - 1;
  }

  int mesAnterior = decrementoMes(mes);

  if (ehMesCom30(mesAnterior)) {
    return 30;
  }

  if (ehMesCom31(mesAnterior)) {
    return 31;
  }

  if (ehAnoBissexto(ano)) {
    return 29;
  }

  return 28;
}

int decrementoDiaSemana(int diaSemana) {
  if (diaSemana != 1) {
    return diaSemana - 1;
  }

  return 7;
}

void imprimeDiaSemana(int diaSemana) {
  if (diaSemana == 1) {
    printf("Voce nasceu num domingo.\n");
  } else if (diaSemana = 2) {
    printf("Voce nasceu numa segunda-feira.\n");
  } else if (diaSemana = 3) {
    printf("Voce nasceu numa terca-feira.\n");
  } else if (diaSemana = 4) {
    printf("Voce nasceu numa quarta-feira.\n");
  } else if (diaSemana = 5) {
    printf("Voce nasceu numa quinta-feira.\n");
  } else if (diaSemana = 6) {
    printf("Voce nasceu numa sexta-feira.\n");
  } else if (diaSemana = 7) {
    printf("Voce nasceu num sabado.\n");
  }
}

int main() {
  int dia, diaAux, mes, mesAux, ano, anoAux, diaSemana = DIA_SEMANA_HOJE;
  int anoContador = 2017, mesContador = 2, diaContador = 27, diasDeVidaCont = 0, idadeCont = 0;

  printf("Entre com dia, mes e ano de nascimento: ");
  scanf("%d %d %d", &dia, &mes, &ano);

  if (dia < 1 || dia > 31) {
    printf("Por favor, digite um dia valido!");
    return 0;
  }

  if (mes < 1 || mes > 12) {
    printf("Por favor, digite um mes valido!");
    return 0;
  }

  if (ano < 1901 || ano > 2017) {
    printf("Por favor, digite um ano valido!");
    return 0;
  }

  anoAux = anoContador;
  mesAux = mesContador;
  diaAux = diaContador;

  while(!(anoContador == ano && mesContador == mes && diaContador == dia)) {
    if (mesContador == mes && diaContador == dia) {
      idadeCont++;
    }

    diaAux = decrementoDia(diaContador, mesContador, anoContador);

    if (diaContador == 1) {
      mesAux = decrementoMes(mesContador);
    }

    if (diaContador == 1 && mesContador == 1) {
      anoAux = anoContador - 1;
    }

    diaSemana = decrementoDiaSemana(diaSemana);
    diasDeVidaCont++;

    diaContador = diaAux;
    mesContador = mesAux;
    anoContador = anoAux;
  }

  printf("\nVoce tem %d anos.\n", idadeCont);
  imprimeDiaSemana(diaSemana);
  printf("Voce viveu %d dias.\n", diasDeVidaCont);


  return 0;
}
