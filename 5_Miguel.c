#include <stdio.h>

int main() {
    int numeros[20], pares = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            pares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);

    return 0;
}