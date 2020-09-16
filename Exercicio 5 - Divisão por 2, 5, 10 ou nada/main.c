/*
 Guilherme Sâo Marcos
 RA: 0732011032
 Exercicio: Dado um numero qualquer, sera informado se o numero é divisivel por 2, 5, 10 ou se nao é divisivel por nenhum deles
*/

#include <stdio.h>

int e_numero;

int main(void) {
  printf("Digite um valor:\n");
  scanf("%d", &e_numero);

  if(e_numero % 2 == 0){
    printf("O numero %d é divisivel por 2\n", e_numero);
    if(e_numero % 5 == 0){
      printf("O numero %d é divisivel por 5\n", e_numero);
      if(e_numero % 5 == 0){
        printf("O numero %d é divisivel por 10\n", e_numero);
      }
    }
  }else{
    if(e_numero % 5 == 0){
      printf("O numero %d é divisivel por 5\n", e_numero);
      if(e_numero % 10 == 0){
        printf("O numero %d é divisivel por 10\n", e_numero);
      }
    }else{
      if(e_numero % 10 == 0){
        printf("o numero %d é divisivel por 2\n", e_numero);
      }else{
        if(e_numero % 2 != 0){
          if(e_numero % 5 != 0){
            if(e_numero % 10 != 0){
              printf("O numero %d NÃO é divisivel por 2, 5 e 10\n", e_numero);
            }
          }
        }
      }
    }
  }
  return 0;
}
