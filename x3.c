#include <stdio.h>
int main() {
  float celcius;
  float fahrenheit;
  float imc;
  printf("Digite a temperatura em Celcius:\n");
  scanf("%f", &celcius);
fahrenheit = celcius * 9/5 + 32;
  printf("A temperatura em Fahrenheit é %f", fahrenheit);
  return 0;
}