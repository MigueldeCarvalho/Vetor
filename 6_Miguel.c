#include <stdio.h>

int main() {
    int numeros[10], busca, encontrado = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite um número para buscar: ");
    scanf("%d", &busca);

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == busca) {
            printf("Número encontrado na posição %d.\n", i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Número não encontrado.\n");
    }

    return 0;
}