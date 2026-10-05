#include <stdio.h>

int main() {
    int senha = 2026;
    int tentativa;
    int i;

    for (i = 1; i <= 3; i++) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);

        if (tentativa == senha) {
            printf("Acesso Concedido!\n");
            return 0;
        }

        printf("Senha incorreta!\n");
    }

    printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}