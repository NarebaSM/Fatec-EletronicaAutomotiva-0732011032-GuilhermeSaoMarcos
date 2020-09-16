/*
 Guilherme São Marcos
 RA: 0732011032
 Exercicio: Dado os 3 angulos do triangulo, será citado se ele é um triangulo Retangulo, Obtusângulo ou Acutângulo
*/

#include <stdio.h>

float e_Angulo1, e_Angulo2, e_Angulo3;

int main(void) {
  printf("Qual o valor do primeiro angulo?\n");
  scanf("%f", &e_Angulo1);
  printf("Qual o valor do primeiro angulo?\n");
  scanf("%f", &e_Angulo2);
  printf("Qual o valor do primeiro angulo?\n");
  scanf("%f", &e_Angulo3);

  if(e_Angulo1 == 90 || e_Angulo2 == 90 || e_Angulo3 == 90){
    printf("É um Triangulo Retangulo");
  }

  if(e_Angulo1 > 90 || e_Angulo2 > 90 || e_Angulo3 > 90){
    printf("É um Triangulo Obtusângulo");
  }

  if(e_Angulo1 < 90 && e_Angulo2 < 90 && e_Angulo3 < 90){
    printf("É um Triangulo Acutângulo");
  }

  return 0;
}
