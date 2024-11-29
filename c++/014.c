#include <stdio.h>
int main(void){
    int resultado, contador, aprovados, reprovados;
    contador = 1;
    aprovados = 0;
    reprovados = 0;
    while(contador <= 10){
      printf("Forneça o resultado( 1=aprovado,2=reprovado):");
      scanf("%d", &resultado);
      contador++;
      if (resultado == 1){
        aprovados++;
      } else{
        reprovados++;
      }
    }
    printf("O número de aprovados foi %d\n", aprovados);
    printf("O número de reprovados foi %d\n", reprovados);
    if(aprovados >= 8){
        printf("bonus para o instrutor\n");
    } return(0);
} 