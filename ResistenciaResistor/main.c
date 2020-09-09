/*
 Guilherme Sâo Marcos
 RA: 0732011032
 Exercicio: Resistencia do Resistor a partir de Tensão e Corrente
*/

#include <stdio.h>
#include <unistd.h>

int main(void) {

  float Tensão, Corrente, Resistencia;

  printf("Bom dia minha senhoria, qual o valor da tensão?\n");
  scanf("%f", &Tensão);
  printf("Agora o valor da corrente por favor senhoria\n");
  scanf("%f", &Corrente);
  printf("Um minuto, to calculando\n");
  Resistencia = Tensão / Corrente;
  sleep(5);
  printf("O valor da resistencia é:\n");
  printf("%f", Resistencia);

  return 0;
}
