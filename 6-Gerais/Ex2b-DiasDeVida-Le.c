#include <stdio.h>
#include <stdbool.h>

// Dado a data de nascimento, dizer quantos dias a pessoa ja viveu e dia da semana em que nasceu
//Não inclui dia no nascimento, inclui dia atual

// Retorna se dado ano é ou não bissexto
bool ehBissexto(int ano) {
  return ano%4==0 ? true : false;
}

//Retorna quantos dias se passaram desde o inicio do ano até determinada data (inclusive)
int ateData(int dia, int mes, int ano){

    int d[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int res = 0, i = 1;

    for(i; i<mes; i++){
        res+= d[i-1];
    }

    if (ehBissexto(ano) && mes>2) res++;

    res+=dia;

    return res;
}

//Retorna quantos dias se passaram apos determinada data (nao inclusa) até fim do ano
int aposData(int dia, int mes, int ano){
    int d[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int res = 0, i = 12;

    for(i; i>mes; i--){
        res+= d[i-1];
    }

    if (ehBissexto(ano) && mes<2) res++;

    res+=d[mes-1]-dia;

    return res;
}

//Retorna quantos dias há em um intervalo de anos completos (considerando que primeiro e ultimo não são completos)
int dias(int inicio, int fim){
    int res = 0, i = inicio+1;

    if (fim-inicio <= 1) return 0;

    for(i ; i<fim; i++){
        res += 365;
        if (ehBissexto(i)) res++;
    }
    return res;
}

int calculo_idade(dia_atual,mes_atual, ano_atual, dia_nasc, mes_nasc, ano_nasc){
    if (ano_atual == ano_nasc){
        return 0;
    }else{
        if (mes_atual > mes_nasc){
            return ano_atual - ano_nasc;
        }else if (mes_atual == mes_nasc){
            if (dia_nasc > dia_atual){
               return ano_atual - ano_nasc - 1;
            }else {
                return ano_atual - ano_nasc;
            }
        }else {
            return ano_atual - ano_nasc - 1;
        }
    }
}


int main() {
    int dia_atual, mes_atual, ano_atual, dia_nasc, mes_nasc, ano_nasc, total;
    int dias_ref, dia_ref=1, mes_ref=1, ano_ref=1920; //quinta

    printf("Que dia eh hoje(dd mm aaaa)?\n");
    scanf("%d %d %d", &dia_atual, &mes_atual, &ano_atual);
    printf("\nQual sua data de nascimento(dd mm aaaa)?\n");
    scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);

    if (ano_atual == ano_nasc){
        total = ateData(dia_atual,mes_atual, ano_atual) + aposData(dia_nasc, mes_nasc, ano_nasc) - 365;
    }else{
        total = ateData(dia_atual,mes_atual, ano_atual) + aposData(dia_nasc, mes_nasc, ano_nasc) + dias(ano_nasc, ano_atual);
    }

    printf("Vc ja viveu %d dias\n", total);
    dias_ref = aposData(dia_ref, mes_ref, ano_ref) + ateData(dia_nasc, mes_nasc, ano_nasc) + dias(ano_ref, ano_nasc);

    printf("Vc tem %d anos\n", calculo_idade(dia_atual,mes_atual, ano_atual, dia_nasc, mes_nasc, ano_nasc));

    printf("Vc nasceu em um(a) ");
    if (dias_ref%7==3) printf("Domingo");
    else if (dias_ref%7==4) printf("Segunda");
    else if (dias_ref%7==5) printf("Terça");
    else if (dias_ref%7==6) printf("Quarta");
    else if (dias_ref%7==0) printf("Quinta");
    else if (dias_ref%7==1) printf("Sexta");
    else if (dias_ref%7==2) printf("Sabado");

    return 0;
}
