#include <stdio.h>
int main(void){
    int x, y, pot, cont;
    cont = 1;
    pot = 1;
    printf("digite um número:\n");
    scanf("%d", &x);
    printf("digite outro, porém maior ou igual a 1:\n");
    scanf("%d", &y);
    if(y<1){
        printf("erro, digite um número maior que 1.");
        return(1);
    } else{
    while(cont <= y){
       pot *= x;
       cont++;
    }
    } 
    printf(" %d elevado a %d é %d", x, y, pot);
    return(0);
}