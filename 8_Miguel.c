#include <stdio.h>

int main() {
    int numeros[15], soma = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        if (i % 2 == 1) { 
            soma += numeros[i];
        }
    }

    printf("Soma dos elementos nas posições ímpares: %d\n", soma);

    return 0;
}