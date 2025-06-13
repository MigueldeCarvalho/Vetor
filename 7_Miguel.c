#include <stdio.h>

int main() {
    int numeros[20], busca, contador = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite um número para contar: ");
    scanf("%d", &busca);

    for (int i = 0; i < 20; i++) {
        if (numeros[i] == busca) {
            contador++;
        }
    }

    printf("O número %d aparece %d vez(es).\n", busca, contador);

    return 0;
}