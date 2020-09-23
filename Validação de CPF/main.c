/*
 Guilherme São Marcos
 RA: 0732011032
 Exercicio: Dado o número do CPF separadamente do digito especial, será informado se o CPF é valido ou não
*/

#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <math.h>
#include <unistd.h>

char e_CPF [9];
char e_dig [2];
int validação1;
int validação2;

int main(void) {

  printf("Digite o CPF sem o digito especial\n");
  scanf("%s", &e_CPF);
  printf("Digite o digito especial do CPF \n");
  scanf("%s", &e_dig);

  validação1 = (((
    ((e_CPF[0] - 48) * 10) +  
    ((e_CPF[1] - 48) * 9) + 
    ((e_CPF[2] - 48) * 8) + 
    ((e_CPF[3] - 48) * 7) + 
    ((e_CPF[4] - 48) * 6) + 
    ((e_CPF[5] - 48) * 5) + 
    ((e_CPF[6] - 48) * 4) + 
    ((e_CPF[7] - 48) * 3) + 
    ((e_CPF[8] - 48) * 2) 
    ) * 10) % 11);

  printf("Validando o CPF %c%c%c.%c%c%c.%c%c%c com o Digito %c \n", e_CPF[0], e_CPF[1],e_CPF[2], e_CPF[3], e_CPF[4], e_CPF[5], e_CPF[6], e_CPF[7], e_CPF[8], e_dig[0]);

  sleep(3);

  if(validação1 == (e_dig[0] - 48) || validação1 == 10){

    printf("A validação com o primeiro digito foi completa\n");
    printf("Fazendo a segunda validação...\n");
    sleep(3);

    validação2 = (((
    ((e_CPF[0] - 48) * 11) +  
    ((e_CPF[1] - 48) * 10) + 
    ((e_CPF[2] - 48) * 9) + 
    ((e_CPF[3] - 48) * 8) + 
    ((e_CPF[4] - 48) * 7) + 
    ((e_CPF[5] - 48) * 6) + 
    ((e_CPF[6] - 48) * 5) + 
    ((e_CPF[7] - 48) * 4) + 
    ((e_CPF[8] - 48) * 3) +
    ((e_dig[0] - 48) * 2)
    ) * 10) % 11);

    if(validação2 == (e_dig[1] - 48) || validação2 == 10){
      printf("o número de CPF %s-%s é valido", e_CPF, e_dig);
    }else{
      printf("o número de CPF %s-%s não é valido", e_CPF, e_dig);
    }

  }else{
    printf("o número de CPF %s-%s não é valido", e_CPF, e_dig);
  }


  return 0;
}
