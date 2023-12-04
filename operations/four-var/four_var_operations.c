#include "four_var_operations.h"
#include <stdio.h>

// Função para imprimir o mapa de Karnaugh com 4 variáveis
void printKMapFourVariables(int map[4][4])
{
  printf("\nPara quatro variáveis A, B, C e D:\n");
  printf("--------------------------------\n");

  printf("\nTabela-Verdade\n");
  printf("----------------\n");
  printf("| F(A, B, C, D) |\n");
  printf("----------------\n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("|       %d       |\n", map[i][j]);
    }
  }
  printf("----------------\n");

  printf("\nMapa de Karnaugh\n");
  printf("-----------------\n");
  printf("| %d | %d | %d | %d |\n", map[0][0], map[0][1], map[0][3], map[0][2]);
  printf("| %d | %d | %d | %d |\n", map[1][0], map[1][1], map[1][3], map[1][2]);
  printf("| %d | %d | %d | %d |\n", map[3][0], map[3][1], map[3][3], map[3][2]);
  printf("| %d | %d | %d | %d |\n", map[2][0], map[2][1], map[2][3], map[2][2]);
  printf("-----------------\n");
}

// Função para preencher o mapa de Karnaugh com 4 variáveis
void fillKMapFourVariables(int map[4][4])
{
  // Preenchendo com um laço for:
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("-> ");
      scanf("%d", &map[i][j]);
    }
  }
}