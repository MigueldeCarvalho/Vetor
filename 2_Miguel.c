#include <stdio.h>

int main() {
    int valores[100], n, soma = 0, count = 0;

    printf("Quantos valores deseja inserir? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    float media = (float)soma / n;

    printf("Média: %.2f\n", media);
    printf("Valores acima da média:\n");

    for (int i = 0; i < n; i++) {
        if (valores[i] > media) {
            printf("%d ", valores[i]);
            count++;
        }
    }

    printf("\nQuantidade acima da média: %d\n", count);

    return 0;
}