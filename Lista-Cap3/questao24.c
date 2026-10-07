
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite um numero impar de 3 a 19: ");
    scanf("%d", &n);

    if (n < 3 || n > 19 || n % 2 == 0) {
        printf("Numero invalido!");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == i || j == n - i + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
