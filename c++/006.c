#include <stdio.h>
int main(void){
int n1, n2, n3, soma, média, produto;
printf("digite 3 números inteiros: ");
scanf("%d %d %d", &n1, &n2, &n3);
soma = n1 + n2 + n3;
média = soma/3;
produto = n1*n2*n3;
 printf("a soma é %d\n", soma);
 printf("a média é %d\n", média);
 printf("o produto é %d\n", produto);
 if(n1>n2 && n1>n3){
 printf("o maior é %d\n", n1);
} else if(n2 > n1 && n2 > n3){
 printf("o maior é %d\n", n2);
} else {
 printf("o maior é %d\n", n3);
} if(n1<n2 && n1<n3){
printf("o menor é %d\n", n1);
} else if(n2<n1 && n2<n3){
 printf("o menor é %d\n", n2);
} else{
 printf("o menor é %d\n", n3);
} return(0);
} 

