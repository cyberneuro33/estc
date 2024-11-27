#include <stdio.h>
int main(void){
 int n1;
 printf("digite um número que te direi se ele é par ou impar");
 scanf("%d", &n1);
 if(n1%2 == 0){
 printf("par\n");
} else{
 printf("impar\n");
} return(0);
}
