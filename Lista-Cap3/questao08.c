
#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota de 0 a 10: ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota invalida!\n");
        }
    } while (nota < 0 || nota > 10);

    printf("Nota registrada com sucesso!");

    return 0;
}
