#include <stdio.h>
#include <unistd.h>

float Resistencia, ResMat, AreaFio, e_CompFio;
float ResMatRef, ConstTemp, e_TempMat, TempRef;
float e_Diametro, RaioFio;
int e_MatFio;

int main(void) {
  printf("Calculador de Resistencia do fio\n");
  
  printf("Qual o Diametro?(cm)\n");
  scanf("%f", &e_Diametro);
  RaioFio = (e_Diametro / 2);
  AreaFio = (3.14 * (RaioFio * RaioFio));

  printf("Qual o Comprimento?(cm)\n");
  scanf("%f", &e_CompFio);

  printf("Qual o material do fio? Prata(1), Cobre(2), Ouro(3), Aluminio(4), Tugstenio(5)\n");
  scanf("%d", &e_MatFio);

  printf("Qual a temperatura(ºC) do local onde está o fio?\n");
  scanf("%f", &e_TempMat);

  if(e_MatFio == 1){
    ResMatRef = 0.00000159;
    ConstTemp = 0.038;

  }else if(e_MatFio == 2){
    ResMatRef = 0.00000172;
    ConstTemp = 0.039;

  }else if(e_MatFio == 3){
    ResMatRef = 0.00000244;
    ConstTemp = 0.034;

  }else if(e_MatFio == 4){
    ResMatRef = 0.00000292;
    ConstTemp = 0.039;

  }else if(e_MatFio == 5){
    ResMatRef = 0.0000056;
    ConstTemp = 0.045;

  }

  TempRef = 20;

  ResMat = ResMatRef * (1 + ConstTemp * (e_TempMat - TempRef));
  Resistencia = ResMat * (e_CompFio / AreaFio);

  printf("Calculando...\n");

  sleep(3);

  printf("A resistencia do fio é de %f ohms\n", Resistencia);

  return 0;
}