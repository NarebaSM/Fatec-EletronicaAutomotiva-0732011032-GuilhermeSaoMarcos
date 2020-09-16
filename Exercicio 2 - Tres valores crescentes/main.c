/*
 Guilherme São Marcos
 RA: 0732011032
 Exercicio: Dado tres valores distintos, serão colocados em ordem crescente
*/

#include <stdio.h>

int e_numero1, e_numero2, e_numero3; // A - e_numero1; B - e_numero2; C - e_numero3.

int main(void) {
  printf("Qual o valor do primeiro numero?\n");
  scanf("%d", &e_numero1);
  printf("Qual o valor do primeiro numero?\n");
  scanf("%d", &e_numero2);
  printf("Qual o valor do primeiro numero?\n");
  scanf("%d", &e_numero3);

  if(e_numero1 < e_numero2 && e_numero1 < e_numero3){
    if(e_numero2 < e_numero3){
      printf("Os numeros em valor crescente são:\n");
      printf("%d-%d-%d", e_numero1, e_numero2, e_numero3);
    }else{
      printf("Os numeros em valor crescente são:\n");
      printf("%d-%d-%d", e_numero1, e_numero3, e_numero2);
    }
  }

  if(e_numero2<e_numero1 && e_numero2<e_numero3){
    if(e_numero1<e_numero3){
      printf("Os numeros em valor crescente são:\n");
      printf("%d-%d-%d", e_numero2, e_numero1, e_numero3);
    }else{
      printf("Os numeros em valor crescente são:\n");
      printf("%d-%d-%d", e_numero2, e_numero3, e_numero1);
    }
  }

  if(e_numero3<e_numero1 && e_numero3<e_numero2){
    if(e_numero1<e_numero2){
      printf("Os numeros em valor crescente são:\n");
      printf("%d-%d-%d", e_numero3, e_numero1, e_numero2);
    }else{
      printf("Os numeros em valor crescente são:\n");
      printf("%d-%d-%d", e_numero3, e_numero2, e_numero1);
    }
  }

  return 0;
}
