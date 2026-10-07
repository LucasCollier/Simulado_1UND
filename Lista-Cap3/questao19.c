

#include <stdio.h>

int main() {
    int n, i;
    long long int a = 1, b = 1, proximo, ultimo = 1;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    if (n < 1 || n > 92) {
        printf("Quantidade invalida!");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        ultimo = a;

        if (i < n) {
            proximo = a + b;
            a = b;
            b = proximo;
        }
    }

    printf("\nTermo %d: %lld", n, ultimo);

    return 0;
}

