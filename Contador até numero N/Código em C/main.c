#include <stdio.h>

int e_nro, var_display = 0;

int main(void) {
  printf("Até que número deve ser mostrado?\n");
  scanf("%i", &e_nro);

  while(var_display <= e_nro){
    printf("%i\n", var_display);
    var_display ++;
  }
  return 0;
}