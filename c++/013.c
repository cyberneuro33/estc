#include <stdio.h>
int main(void) {
    int contador;
    float notas;
    float total;
    float media;
    contador = 0;  // Começa com 0
    total = 0;
    printf("Digite as notas e quando terminar digite -1\n");
    // Lê a primeira nota
    printf("%dª nota: ", contador + 1);
    scanf("%f", &notas);
    // Loop até o usuário digitar -1
    while (notas != -1) {
        total += notas;
        contador++;
        printf("Digite a nota %d: ", contador + 1);
        scanf("%f", &notas);
    }
    // Verifica se ao menos uma nota válida foi digitada
    if (contador > 0) {
        media = total / contador;
        printf("A média é %.2f\n", media);
    } else {
        printf("Nenhuma nota válida foi digitada.\n");
    }
    return 0;
}
