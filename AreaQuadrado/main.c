#include <stdio.h>

int main(void) {

  int Area, Base;

  printf("Valor da base:\n");
  scanf("%d", &Base);
  printf("Calculando...\n");
  Area = Base * Base;
  printf("O valor da Area do quadrado é:\n");
  printf("%d\n",Area);
  return 0;
}