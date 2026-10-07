
#include <stdio.h>

int main() {
    int a, b, i, j, divisores, soma = 0;

    printf("Digite A: ");
    scanf("%d", &a);

    printf("Digite B: ");
    scanf("%d", &b);

    if (a <= 0 || a >= b) {
        printf("Intervalo invalido!");
        return 0;
    }

    for (i = a; i <= b; i++) {
        divisores = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", i);
            soma += i;
        }
    }

    printf("\nSoma dos primos: %d", soma);

    return 0;
}
