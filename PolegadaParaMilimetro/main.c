#include <stdio.h>
#include <unistd.h>

int main(void) {

  float polegada, milimetro;

  printf("Qual o valor em polegada?\n");
  scanf("%f", &polegada);
  printf("calculando...\n");
  milimetro = polegada * 25.4;
  sleep(5);
  printf("o valor de %f polegadas, em milimetro é:\n", polegada);
  printf("%f milimetros", milimetro);
  return 0;
}