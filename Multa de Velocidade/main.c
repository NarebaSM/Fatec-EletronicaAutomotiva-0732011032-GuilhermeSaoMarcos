#include <stdio.h>
#include <unistd.h>

int e_Veloc_Max_Via, e_Veloc_Carro;
int tolerancia, abaixo20, acima50;

int main(void) {
  printf("Qual a velocidade da via em km/h?\n");
  scanf("%i", &e_Veloc_Max_Via);
  printf("Qual a velocidade do carro em km/h?\n");
  scanf("%i", &e_Veloc_Carro);

  tolerancia = (e_Veloc_Max_Via + (0.07 * e_Veloc_Max_Via));
  abaixo20 = (e_Veloc_Max_Via + (0.2 * e_Veloc_Max_Via));
  acima50 = (e_Veloc_Max_Via + (0.5 * e_Veloc_Max_Via));

  sleep(5);

  if(e_Veloc_Carro > acima50){

    printf("multa grave com punição de 7 pontos na carteira\n");
  }else{
    if(e_Veloc_Carro <= acima50 && e_Veloc_Carro > abaixo20){

      printf("punição de 5 pontos na carteira\n");
    }else{
      if(e_Veloc_Carro <= abaixo20 && e_Veloc_Carro > tolerancia){

        printf("punição de 4 pontos na carteira\n");
      }else{
        if(e_Veloc_Carro <= tolerancia){

          printf("Não tem mula nem punição\n");
        }
      }
    }
  }

  return 0;
}