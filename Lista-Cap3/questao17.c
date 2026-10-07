
#include <stdio.h>

int main() {
    float nota, maior = 0, menor = 10, soma = 0;
    int quantidade = 0;

    while (1) {
        printf("Digite a nota (-1 para sair): ");
        scanf("%f", &nota);

        if (nota == -1) {
            break;
        }

        if (nota < 0 || nota > 10) {
            printf("Nota invalida!\n");
            continue;
        }

        if (nota > maior) {
            maior = nota;
        }

        if (nota < menor) {
            menor = nota;
        }

        soma += nota;
        quantidade++;
    }

    printf("Total de alunos: %d\n", quantidade);

    if (quantidade > 0) {
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media: %.2f\n", soma / quantidade);
    }

    return 0;
}
