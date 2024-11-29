#include <stdio.h>
int main(void){
int total; // Variável que indica quantas notas são no total
int contador;// um contador que serve para um laço de repetição até que ele se esquipare ao total
float notas;
float somanotas;
float media;
somanotas = 0;
notas = 0;
contador = 1;
printf("digite quantas notas  serão inseridas:\n");
scanf("%d", &total);
while (contador <= total)
{
  printf("digite a %d nota\n", contador);
  scanf("%f", &notas);
  if(notas > 10 || notas < 0){
    printf("nota invalida. programa encerrado.\n");
    return(1);
  }
  somanotas += notas;
  contador++;
} 
  media = somanotas/total;
  printf("A média das notas foi %.2f\n", media);
  return(0);  
} 