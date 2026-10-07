
#include <stdio.h>

int main() {
    int opcao;
    float salario, resultado;

    do {
        printf("\n1 - Reajuste salarial\n");
        printf("2 - Imposto de renda\n");
        printf("3 - Encerrar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario: ");
                scanf("%f", &salario);

                if (salario < 0) {
                    printf("Salario invalido!\n");
                } else {
                    if (salario <= 2000) {
                        resultado = salario * 1.15;
                    } else {
                        resultado = salario * 1.10;
                    }

                    printf("Novo salario: R$ %.2f\n", resultado);
                }
                break;

            case 2:
                printf("Digite o salario: ");
                scanf("%f", &salario);

                if (salario < 0) {
                    printf("Salario invalido!\n");
                } else {
                    if (salario <= 3000) {
                        resultado = salario * 0.08;
                    } else {
                        resultado = salario * 0.15;
                    }

                    printf("Desconto: R$ %.2f\n", resultado);
                }
                break;

            case 3:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 3);

    return 0;
}
