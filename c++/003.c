#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
// da inicio a função main
int main(void) {
    // Imprime uma mensagem inicial para o usuário
    printf("Digite 2 inteiros e te direi a relação entre eles\n");

    int n1;  // Declara a variável para o primeiro número inteiro
    int n2;  // Declara a variável para o segundo número inteiro

    // Lê dois inteiros do usuário e os armazena em n1 e n2
    scanf("%d%d", &n1, &n2);

    // Verifica se os dois números são iguais
    if (n1 == n2) {
        printf("Os 2 números são iguais\n");
    } 
    // Se n1 não for igual a n2, verifica se n1 é menor que n2
    else if (n1 < n2) {
        printf("O primeiro número é menor que o segundo\n");
    } 
    // Caso n1 não seja igual nem menor que n2, então n1 é maior que n2
    else {
        printf("O primeiro número é maior que o segundo\n");
    }

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0; 
}
