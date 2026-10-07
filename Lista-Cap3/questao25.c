
#include <stdio.h>

int main() {
    int n, i, divisores = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido!");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores: %d\n", divisores);

    if (divisores == 2) {
        printf("O numero e primo!");
    } else {
        printf("O numero nao e primo!");
    }

    return 0;
}
