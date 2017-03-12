#include <stdio.h>
#include <stdbool.h>

// Pra saber se dá pra resolver um estado inicial http://math.stackexchange.com/questions/293527/how-to-check-if-a-8-puzzle-is-solvable

// Imprime uma configuração do puzzle dada uma matriz M
void printPuzzle(int M[][3]) {
  int i, j;

  printf("\n");
  for (i = 0; i < 3; i++) {
    printf("\n    -----------");
    printf("\n   | ");
    for (j = 0; j < 3; j++) {
      if (M[i][j] == 0) {
        printf("  | ");
      } else {
        printf("%d | ", M[i][j]);
      }
    }
  }
  printf("\n    -----------\n\n");
}

// Retorna se a matriz dada é a solução do puzzle
bool ehSolucao(int M[][3]) {
  int i, j;

  if (M[2][2] != 0) {
    return false;
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (M[i][j] != 3*i + j + 1 && !(i == 2 && j == 2)) {
        return false;
      }
    }
  }

  return true;
}

// Retorna se o número escolhido, para a matriz dada, é uma jogada possível (ou seja, está adjascente ao branco)
bool jogadaValida(int M[][3], int num) {
  int i, j, linha, linhaZ, col, colZ;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (M[i][j] == 0) {
        linhaZ = i;
        colZ = j;
      }
      if (M[i][j] == num) {
        linha = i;
        col = j;
      }
    }
  }

  if (col == colZ) {
    return linha == linhaZ + 1 || linha == linhaZ - 1;
  } else if (linha == linhaZ) {
    return col == colZ + 1 || col == colZ - 1;
  } else {
    return false;
  }
}

// Troca a posição de duas peças no puzzle
void trocaPosicao(int M[][3], int a, int b) {
  int i, j, xa, xb, ya, yb;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (M[i][j] == a) {
        xa = i;
        ya = j;
      }
      if (M[i][j] == b) {
        xb = i;
        yb = j;
      }
    }
  }

  M[xa][ya] = b;
  M[xb][yb] = a;
}

int main() {
  int i, j, num, cont = 0;
  bool desistiu = false;
  int M[3][3] = {7,4,6,5,8,2,1,0,3};

  printf("\n  Bem vindo ao 8-puzzle. O estado inicial do puzzle eh:\n");
  printPuzzle(M);

  while (!ehSolucao(M) && !desistiu) {
    printf("\n  Entre com o numero desejado para realizar a jogada (0 para desistir): ");
    scanf("%d", &num);

    if (num == 0) {
      desistiu = true;
    } else if (num < 1 || num > 8) {
      printf("  Jogada invalida! Escolha um numero de 1 a 8.\n");
    } else if (!jogadaValida(M, num)) {
      printf("  Jogada invalida! Escolha um numero que seja adjascente ao branco.\n");
    } else {
      trocaPosicao(M, 0, num);
      printPuzzle(M);
      cont++;
    }
  }

  if (desistiu) {
    printf("\n  Desistencia! :(\n  Numero de tentativas: %d. Tente novamente!\n", cont);
  } else {
    printf("\n  Parabens, voce completou o puzzle em %d jogada(s)! :)\n", cont);
  }
}
