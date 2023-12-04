#include "three_var_operations.h"
#include <stdio.h>

// Função para preencher o mapa de Karnaugh com 3 variáveis
void printKMapThreeVariables(int map[2][4])
{
  printf("\nPara três variáveis A, B e C:\n");
  printf("--------------------------------\n");

  printf("\nTabela-Verdade\n");
  printf("-----------\n");
  printf("| F(A, B, C) |\n");
  printf("-----------\n");
  printf("|     %d     |\n", map[0][0]);
  printf("|     %d     |\n", map[0][1]);
  printf("|     %d     |\n", map[0][2]);
  printf("|     %d     |\n", map[0][3]);
  printf("|     %d     |\n", map[1][0]);
  printf("|     %d     |\n", map[1][1]);
  printf("|     %d     |\n", map[1][2]);
  printf("|     %d     |\n", map[1][3]);
  printf("-----------\n");

  printf("\nMapa de Karnaugh\n");
  printf("-----------------\n");
  printf("| %d | %d | %d | %d |\n", map[0][0], map[0][1], map[0][3], map[0][2]);
  printf("| %d | %d | %d | %d |\n", map[1][0], map[1][1], map[1][3], map[1][2]);
  printf("-----------------\n");
}

void fillKMapThreeVariables(int map[2][4])
{
  // Preenchendo com um laço for:
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("-> ");
      scanf("%d", &map[i][j]);
    }
  }
}