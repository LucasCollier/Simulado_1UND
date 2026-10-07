
#include <stdio.h>

int main() {
    int senha, tentativa;

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == 2026) {
            printf("Acesso Concedido!\n");
            printf("Tentativas: %d", tentativa);
            return 0;
        }

        printf("Senha incorreta!\n");
    }

    printf("Conta Bloqueada por Seguranca!");

    return 0;
}
