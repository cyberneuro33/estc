#include <stdio.h>

int main(void) {
    int n1, n2, n3, soma;  // Declarando todas as variáveis em uma linha

    // Pedindo ao usuário para inserir três números inteiros
    printf("Digite 3 números inteiros para efetuar a soma deles: ");

    // Validando a entrada para garantir que o usuário insira números inteiros
    if (scanf("%d %d %d", &n1, &n2, &n3) != 3) {
        printf("Erro: Você deve digitar três números inteiros.\n");
        return 1;  // Retorna um código de erro se a entrada for inválida
    }

    // Calculando a soma dos números
    soma = n1 + n2 + n3;

    // Exibindo o resultado
    printf("A soma resultante é: %d\n", soma);

    return 0;  // Retorno padrão de sucesso
}

