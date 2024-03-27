#include<math.h>
int main(){
float cateto1;
  float cateto2;
printf("Digite o primeiro cateto:\n");
scanf("%f", &cateto1);
printf("digite o segundo cateto:\n");
scanf("%f", &cateto2);
float hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
printf("Um triângulo com lados %f e %f tem a hipotenusa %f", cateto1, cateto2, hipotenusa);
  return 0;
  


  
}