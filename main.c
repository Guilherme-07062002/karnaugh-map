#include <stdio.h>
#include "./operations/two-var/two_var_operations.h"
#include "./operations/three-var/three_var_operations.h"

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
    case 3:
        printf("Você escolheu 3 variáveis\nInforme os valores da tabela-verdade:\n");
        int mapThreeVariables[2][4]; // Mapa de Karnaugh para 3 variáveis
        fillKMapThreeVariables(mapThreeVariables);
        printKMapThreeVariables(mapThreeVariables);
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
