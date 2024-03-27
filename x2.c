#include <stdio.h>
int main() {
  float peso;
  float altura;
  float imc;
  printf("Digite seu peso:\n");
  scanf("%f", &peso);
  printf("Digite sua altura:\n");
  scanf("%f", &altura);
  imc = peso / (altura * altura);
  printf("O IMC de uma pessoa com peso %f kg e altura %f m é igual a %f.", peso, altura, imc);
  return 0;
}