#include <stdio.h>

int main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Ordem normal:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nOrdem inversa:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    printf("\n");
    return 0;
}