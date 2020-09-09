#include <stdio.h>
#include <unistd.h>

int main(void) {

  float Base, Altura, Area;
  printf("Qual o valor da Base?\n");
  scanf("%f", &Base);
  printf("Qual o valor da Algura?\n");
  scanf("%f", &Altura);
  printf("Calculando\n");
  Area = Base * Altura;
  sleep(2);
  printf(".\n");
  sleep(2);
  printf(".\n");
  sleep(2);
  printf(".\n");
  sleep(2);
  printf("O valor da Area do Retangulo é:\n");
  printf("%f", Area);
  return 0;
}