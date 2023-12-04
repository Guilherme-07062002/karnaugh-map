#include "five_var_operations.h"
#include <stdio.h>

void printKMapFiveVariables(int map[4][8])
{
  printf("\nPara cinco variáveis A, B, C, D e E:\n");
  printf("-----------------------------------\n");

  printf("\nTabela-Verdade\n");
  printf("----------------\n");
  printf("| F(A, B, C, D, E) |\n");
  printf("----------------\n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      printf("|       %d       |\n", map[i][j]);
    }
  }
  printf("----------------\n");

  printf("\nMapa de Karnaugh\n");
  printf("-----------------\n");
  printf("| %d | %d | %d | %d | %d | %d | %d | %d |\n", map[0][0], map[0][1], map[0][3], map[0][2], map[0][6], map[0][7], map[0][5], map[0][4]);
  printf("| %d | %d | %d | %d | %d | %d | %d | %d |\n", map[1][0], map[1][1], map[1][3], map[1][2], map[1][6], map[1][7], map[1][5], map[1][4]);
  printf("| %d | %d | %d | %d | %d | %d | %d | %d |\n", map[3][0], map[3][1], map[3][3], map[3][2], map[3][6], map[3][7], map[3][5], map[3][4]);
  printf("| %d | %d | %d | %d | %d | %d | %d | %d |\n", map[2][0], map[2][1], map[2][3], map[2][2], map[2][6], map[2][7], map[2][5], map[2][4]);
  printf("-----------------\n");
}

void fillKMapFiveVariables(int map[4][8])
{
  // Preenchendo com um laço for:
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      printf("-> ");
      scanf("%d", &map[i][j]);
    }
  }
}