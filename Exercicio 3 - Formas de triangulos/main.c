#include <stdio.h>

int e_Lado1, e_Lado2, e_Lado3;

int main(void) {
  printf("Qual o valor do lado 1?\n");
  scanf("%d", &e_Lado1);
  printf("Qual o valor do lado 2?\n");
  scanf("%d", &e_Lado2);
  printf("Qual o valor do lado 3?\n");
  scanf("%d", &e_Lado3);

  if(e_Lado1 == e_Lado2){
    if(e_Lado2 == e_Lado3){
      printf("O triangulo é Equilatero\n");
    }
  }

  if(e_Lado1 == e_Lado2){
    if(e_Lado1 != e_Lado3){
      printf("o triangulo é Isóceles\n");
    }
  }
    if(e_Lado2 == e_Lado3){
    if(e_Lado3 != e_Lado1){
      printf("o triangulo é Isóceles\n");
    }
  }
    if(e_Lado1 == e_Lado3){
    if(e_Lado2 != e_Lado1){
      printf("o triangulo é Isóceles\n");
    }
  }

  if(e_Lado1 != e_Lado2){
    if(e_Lado2 != e_Lado3){
      if(e_Lado3 != e_Lado1){
        printf("o triangulo é Escaleno\n");
      }
    }
  }

  return 0;
  }