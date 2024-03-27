#include <stdio.h>
#include<math.h>
int main() {
  float raio;
  float area;
  printf("Digite o raio do círculo:\n");
  scanf("%f", &raio);
  area = 3.1415*(raio*raio);
  printf("Um círculo com raio %f tem área igual a %f", raio, area);
  return 0;
}