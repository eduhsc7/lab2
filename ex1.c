#include <stdio.h>
int main() {
  int n1;
  int n2;
  int soma;
  int subtracao;
  int multiplicacao;
  int divisao;
  printf("Escolha dois números:\n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  soma = n1 + n2;
  subtracao = n1 - n2;
  multiplicacao = n1 * n2;
  divisao = n1 / n2;
  printf("Soma dos números: %d\n", soma);
  printf("Subtração dos números: %d\n", subtracao);
  printf("Multiplicação: %d\n", multiplicacao);
  printf("Divisão: %d\n", divisao);
  return 0;
}