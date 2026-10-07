
#include <stdio.h>

int main() {
    float numero, soma = 0;
    int quantidade = 0;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    while (numero >= 0) {
        soma += numero;
        quantidade++;

        printf("Digite outro numero: ");
        scanf("%f", &numero);
    }

    printf("Quantidade: %d\n", quantidade);
    printf("Soma: %.2f\n", soma);

    if (quantidade > 0) {
        printf("Media: %.2f\n", soma / quantidade);
    }

    return 0;
}
