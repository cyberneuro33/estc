#include <stdio.h>
int main(void) {
    int numero, dig1, dig2, dig3, dig4, dig5;

    // Solicita ao usuário que insira um número inteiro de 5 dígitos
    printf("Digite um número inteiro de 5 dígitos: ");
    scanf("%d", &numero);

    // Verifica se o número possui exatamente 5 dígitos
    if (numero < 10000 || numero > 99999) {
        printf("Erro: O número deve ter exatamente 5 dígitos.\n");
        return 1; // Termina o programa com código de erro
    }

    // Extrai os dígitos individuais
    dig1 = numero / 10000;              // Primeiro dígito
    dig2 = (numero / 1000) % 10;        // Segundo dígito
    dig3 = (numero / 100) % 10;         // Terceiro dígito
    dig4 = (numero / 10) % 10;          // Quarto dígito
    dig5 = numero % 10;                 // Quinto dígito

    // Exibe os dígitos separados
    printf("Os dígitos são: %d %d %d %d %d\n", dig1, dig2, dig3, dig4, dig5);
   return(0);
}
    
