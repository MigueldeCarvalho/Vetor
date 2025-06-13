#include <stdio.h>

int main() {
    int numeros[12], menor, pos;

    for (int i = 0; i < 12; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    menor = numeros[0];
    pos = 0;

    printf("Números informados:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d\n", numeros[i]);
        if (numeros[i] < menor) {
            menor = numeros[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posição do menor valor: %d\n", pos);

    return 0;
}