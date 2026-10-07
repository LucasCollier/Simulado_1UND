
#include <stdio.h>

int main() {
    int i, quadrado, soma = 0;

    for (i = 1; i <= 100; i++) {
        quadrado = i * i;
        soma += quadrado;

        printf("%d -> %d\n", i, quadrado);
    }

    printf("Soma total: %d", soma);

    return 0;
}
