#include "two_var_operations.h"
#include <stdio.h>

// Função para imprimir o mapa de Karnaugh com 2 variáveis
void printKMapTwoVariables(int map[2][2])
{
  printf("\nPara duas variáveis A e B:\n");
  printf("--------------------------------\n");

  printf("\nTabela-Verdade\n");
  printf("-----------\n");
  printf("| F(A, B) |\n");
  printf("-----------\n");
  printf("|    %d    |\n", map[0][0]);
  printf("|    %d    |\n", map[0][1]);
  printf("|    %d    |\n", map[1][0]);
  printf("|    %d    |\n", map[1][1]);
  printf("-----------\n");

  printf("\nMapa de Karnaugh\n");
  printf("---------\n");
  printf("| %d | %d |\n", map[0][0], map[0][1]);
  printf("| %d | %d |\n", map[1][0], map[1][1]);
  printf("---------\n");
}

// Função para preencher o mapa de Karnaugh com 2 variáveis
void fillKMapTwoVariables(int map[2][2])
{

  // Preenchendo com um laço for:
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("-> ");
      scanf("%d", &map[i][j]);
    }
  }
}