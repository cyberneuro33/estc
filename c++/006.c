#include <stdio.h>

int main(void) {
    int n1, n2, n3, soma, produto;
    float media;

    // Entrada dos números
    printf("Digite 3 números inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Cálculos
    soma = n1 + n2 + n3;
    media = soma / 3.0; // Divisão com ponto flutuante
    produto = n1 * n2 * n3;

    // Saída dos resultados
    printf("A soma é %d\n", soma);
    printf("A média é %.1f\n", media);
    printf("O produto é %d\n", produto);

    // Determinação do maior número
    if (n1 > n2 && n1 > n3) {
        printf("O maior é %d\n", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("O maior é %d\n", n2);
    } else {
        printf("O maior é %d\n", n3);
    }

    // Determinação do menor número
    if (n1 < n2 && n1 < n3) {
        printf("O menor é %d\n", n1);
    } else if (n2 < n1 && n2 < n3) {
        printf("O menor é %d\n", n2);
    } else {
        printf("O menor é %d\n", n3);
    }

    return 0;
}

