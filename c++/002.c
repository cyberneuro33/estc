#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída para uso das funções 

int main(void) {
    int n1;   // Declara a variável para armazenar o primeiro número inteiro
    int n2;   // Declara a variável para armazenar o segundo número inteiro
    int soma; // Declara a variável para armazenar a soma dos dois números

    // Exibe uma mensagem pedindo ao usuário para digitar o primeiro número
    printf("Digite o 1º número: ");
    scanf("%d", &n1);  // Lê o valor inserido pelo usuário e armazena em n1

    // Exibe uma mensagem pedindo ao usuário para digitar o segundo número
    printf("Digite o 2º número: ");
    scanf("%d", &n2);  // Lê o valor inserido pelo usuário e armazena em n2

    // Calcula a soma de n1 e n2 e armazena o resultado na variável soma
    soma = n1 + n2;

    // Verifica se a soma é menor ou igual a 10
    if (soma <= 10) {
        // Se a soma for menor ou igual a 10, exibe a mensagem "muito burro"
        printf("Muito burro\n");
    } else{
        printf("essa ta difícil\n");
    }
    printf("A soma é %d\n", soma);

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
