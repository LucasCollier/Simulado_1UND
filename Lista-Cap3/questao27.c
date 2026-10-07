
#include <stdio.h>

int main() {
    int valor, resto, i, quantidade;
    int cedulas[6] = {100, 50, 20, 10, 5, 2};

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    if (valor <= 0 || valor == 1 || valor == 3) {
        printf("Valor invalido!");
        return 0;
    }

    resto = valor;

    for (i = 0; i < 6; i++) {
        quantidade = 0;

        while (resto >= cedulas[i]) {
            if (resto - cedulas[i] == 1 || resto - cedulas[i] == 3) {
                break;
            }

            resto -= cedulas[i];
            quantidade++;
        }

        if (quantidade > 0) {
            printf("%d cedulas de R$ %d\n", quantidade, cedulas[i]);
        }
    }

    return 0;
}
