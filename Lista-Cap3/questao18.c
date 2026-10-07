
#include <stdio.h>

int main() {
    int numero, inverso = 0, resto;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Numero invalido!");
        return 0;
    }

    while (numero > 0) {
        resto = numero % 10;
        inverso = inverso * 10 + resto;
        numero /= 10;
    }

    printf("Numero invertido: %d", inverso);

    return 0;
}
