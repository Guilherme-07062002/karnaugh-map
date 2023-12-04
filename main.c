#include <stdio.h>
#include "two_var_operations.h"

// Função para selecionar a quantidade de variáveis
void selectNumberVariables()
{
    int numberVariables;
    printf("Digite o número de variáveis: ");
    scanf("%d", &numberVariables);

    switch (numberVariables)
    {
    case 2:
        printf("Você escolheu 2 variáveis\nInforme os valores da tabela-verdade:\n");
        int map[2][2]; // Mapa de Karnaugh para 2 variáveis
        fillKMapTwoVariables(map);
        printKMapTwoVariables(map);
        break;
    default:
        printf("Número de variáveis inválido\n");
        break;
    }
}

int main()
{
    selectNumberVariables();

    return 0;
}
