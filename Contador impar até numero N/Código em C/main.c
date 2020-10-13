#include <stdio.h>

int e_nro, var_display = 0;

int main(void) {
  printf("Números impares até que numero?\n");
  scanf("%i", &e_nro);

  while(var_display <= e_nro){
    if((var_display % 2) != 0){
      printf("%i\n", var_display);
      var_display ++;
    }else{
      var_display ++;
    }
  }

  return 0;
}