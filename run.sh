mkdir -p output  # Cria o diretório "output", se ainda não existir

gcc -o output/program main.c two_var_operations.c  # Compila o código e gera o executável em "output/program"

./output/program  # Executa o programa