# Projeto de Geração de Mapa de Karnaugh em C

Este é um programa simples em linguagem C que monta um mapa de Karnaugh com base no resultado da tabela-verdade para 2, 3, 4 e 5 variáveis.

## Execução do Programa

```bash
./run.sh
```

## Exemplo de Execução

```bash
Digite o número de variáveis: 2
Você escolheu 2 variáveis
Informe os valores da tabela-verdade:
-> 0
-> 0
-> 1
-> 1

Para duas variáveis A e B:
--------------------------------

Tabela-Verdade
-----------
| F(A, B) |
-----------
|    0    |
|    0    |
|    1    |
|    1    |
-----------

Mapa de Karnaugh
------------
   |'B | B |
------------
'A | 0 | 0 |
 B | 1 | 1 |
------------
```
