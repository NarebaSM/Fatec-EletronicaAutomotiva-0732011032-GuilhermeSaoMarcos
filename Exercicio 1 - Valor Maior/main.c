#include <stdio.h>

float e_numero1, e_numero2;

int main(void) {
  printf("Qual o Valor do primeiro numero?\n");
  scanf("%f", &e_numero1);
  printf("qual o Valor do segundo numero?\n");
  scanf("%f", &e_numero2);
  if(e_numero1 > e_numero2){

    printf("O maior numero é:\n");
    printf("%f", e_numero1);
  }
  else{

    printf("O maior numero é:\n");
    printf("%f", e_numero2);
  }
  return 0;
}