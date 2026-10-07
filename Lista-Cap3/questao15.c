
#include <stdio.h>

int main() {
    int num, i, encontrou = 0;

    printf("Digite um limite positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Numero invalido!");
        return 0;
    }

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero encontrado.");
    }

    return 0;
}
