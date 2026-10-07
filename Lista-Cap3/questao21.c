
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letra, tentativa;
    int quantidade = 0;

    srand(time(NULL));
    letra = rand() % 26 + 'a';

    do {
        printf("Adivinhe a letra: ");
        scanf(" %c", &tentativa);
        quantidade++;

        if (tentativa < letra) {
            printf("A letra vem depois!\n");
        } else if (tentativa > letra) {
            printf("A letra vem antes!\n");
        }

    } while (tentativa != letra);

    printf("Parabens! Voce acertou!\n");
    printf("Tentativas: %d", quantidade);

    return 0;
}
