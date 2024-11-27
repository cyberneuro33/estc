#include <stdio.h>
int main(void){
 float r, d, pi, a;
 pi = 3.14159;
 printf("digite o raio do circulo\n");
 scanf("%f", &r);
 d = 2*r;
 a = pi*r*r;
 printf("o valor do diametro do circulo é %.1f e a área %.4f\n", d, a);
 return(0);
}
