#include <stdio.h>

int main() {
    int numero, i;
    long long int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero invalido!\n");
    } else {
        for (i = 1; i <= numero; i++) {
            fatorial = fatorial * i;
        }

        printf("Fatorial de %d = %lld\n", numero, fatorial);
    }

    return 0;
}