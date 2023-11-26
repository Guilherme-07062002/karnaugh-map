#include <stdio.h>

// Função para imprimir o mapa de Karnaugh com 2 variáveis
void printKMapTwoVariables(int map[2][2])
{
    printf("\nMapa de Karnaugh para duas variáveis A e B:\n");
    printf("-----------------\n");
    printf("| A B | F(A, B) |\n");
    printf("-----------------\n");
    printf("| 0 0 |    %d    |\n", map[0][0]);
    printf("| 0 1 |    %d    |\n", map[0][1]);
    printf("| 1 0 |    %d    |\n", map[1][0]);
    printf("| 1 1 |    %d    |\n", map[1][1]);
    printf("-----------------\n");
}

// Função para preencher o mapa de Karnaugh com 2 variáveis
void fillKMapTwoVariables(int map[2][2])
{
    int A, B;

    printf("Digite o valor para A (0 ou 1): ");
    scanf("%d", &A);
    printf("Digite o valor para B (0 ou 1): ");
    scanf("%d", &B);

    // Implementação das expressões booleanas para preencher o mapa de Karnaugh
    map[0][0] = A && B;
    map[0][1] = A && !B;
    map[1][0] = !A && B;
    map[1][1] = !A && !B;
}

int main()
{
    int numberVariables;
    printf("Digite o número de variáveis: ");
    scanf("%d", &numberVariables);

    switch (numberVariables)
    {
    case 2:
        printf("Você escolheu 2 variáveis\n");
        int map[2][2]; // Mapa de Karnaugh para 2 variáveis
        fillKMapTwoVariables(map);
        printKMapTwoVariables(map);
        break;
    default:
        printf("Número de variáveis inválido\n");
        break;
    }

    return 0;
}
