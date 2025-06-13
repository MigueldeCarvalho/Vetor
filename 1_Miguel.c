#include <stdio.h>

int main() {
    int idades[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    printf("Primeira idade informada: %d\n", idades[0]);
    printf("Última idade informada: %d\n", idades[9]);

    return 0;
}