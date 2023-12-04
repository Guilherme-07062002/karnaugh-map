mkdir -p output # Cria o diretório "output", se ainda não existir

gcc -o output/program main.c \
  operations/two-var/two_var_operations.c \
  operations/three-var/three_var_operations.c # Compila o código e gera o executável em "output/program"

./output/program # Executa o programa
