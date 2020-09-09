/*
 Guilherme Sâo Marcos
 RA: 0732011032
 Exercicio: Resistencia Equivalente em Paralelo ou Série
 */

#include <stdio.h>

int main(void) {

  int circuito;
  float R1, R2, REQ;


  printf("O circuito é serie(1) ou paralelo(2)?\n");
  scanf("%d", &circuito);

  if(circuito == 1){

    printf("qual o valor do resistor 1?\n");
    scanf("%f", &R1);
    printf("qual o valor do resistor 2?\n");
    scanf("%f", &R2);
    REQ = R1 + R2;
    printf("O valor de REQ é:");
    printf("%f", REQ);

  }

  if(circuito == 2){

    printf("qual o valor do resistor 1?\n");
    scanf("%f", &R1);
    printf("qual o valor do resistor 2?\n");
    scanf("%f", &R2);
    REQ = (R1*R2) / (R1+R2);
    printf("O valor de REQ é:");
    printf("%f", REQ);
    
  }

  return 0;
}
