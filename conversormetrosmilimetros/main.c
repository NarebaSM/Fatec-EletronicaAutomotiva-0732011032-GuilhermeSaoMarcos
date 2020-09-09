/*
 Guilherme Sâo Marcos
 RA: 0732011032
 Exercicio: Conversor de Metros para Milimetros
*/

#include <stdio.h>

int main(void) {

  int e_metro, s_milimetro;

  printf("Entre com o valor em metros[m]:\n");
  scanf("%d", &e_metro);
  printf("Inicio: calculando...\n");
  s_milimetro = 1000 * e_metro;
  printf("Termino: calculando...\n");
  printf("O valor de %d[m] em milimetro, é:\n", e_metro);
  printf("%d [mm]",s_milimetro);
  return 0;
}
