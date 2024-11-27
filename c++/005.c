#include <stdio.h>
int main(void){
 int n1, n2;
  printf("digite 2 números inteiro:s\n");
 scanf("%d %d",&n1,&n2);
  if(n1>n2){
    printf("%d é maior\n", n1);
}
  if(n1==n2){
  printf("Esses números são iguais\n");
}
if(n1<n2){
  printf("%d é maior\n", n2);
}
 return(0);
}
