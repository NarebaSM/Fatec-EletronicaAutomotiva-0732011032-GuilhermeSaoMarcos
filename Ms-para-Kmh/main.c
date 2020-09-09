/*
 Guilherme Sâo Marcos
 RA: 0732011032
 Exercicio: Conversor de velocidade, Km/h para m/s ou m/s para Km/h
*/

#include <stdio.h>
#include <unistd.h>

int main(void) {

  float ms, kh;
  int conversão;

  printf("tranformação de km/h para m/s(1) ou m/s para km/h(2) ?\n");
  scanf("%d", &conversão);
  if(conversão == 1){

    printf("qual o valor da velocidade em km/h?\n");
    scanf("%f", &kh);
    printf("Calculando...\n");
    ms = kh / 3.6;
    sleep(5);
    printf("o valor %f em m/s é:\n", kh);
    printf("%f", ms);
  }

  if(conversão == 2){

    printf("qual o valor da velocidade em m/s?\n");
    scanf("%f", &ms);
    printf("Calculando...\n");
    kh = ms * 3.6;
    sleep(5);
    printf("o valor %f em km/h é:\n", ms);
    printf("%f", kh);

  }
  return 0;
}
