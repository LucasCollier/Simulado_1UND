
#include <stdio.h>

int main() {
    int n, i;
    long long int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido!");
    } else if (n > 20) {
        printf("Numero muito grande!");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }

        printf("Fatorial: %lld", fatorial);
    }

    return 0;
}
