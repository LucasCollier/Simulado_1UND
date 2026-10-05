# ETAPA 1

## QUESTÃO 1

c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores diferentes para o compilador.


## QUESTÃO 2

1. O #include <stdlib.h> está com ponto e vírgula no final.

2. A função Main está escrita com M maiúsculo. O correto é main.

3. O texto do printf precisa estar entre aspas.

Também tem o cout << endl, que é usado em C++ e não em C.


## QUESTÃO 3

Valores finais:

a = 56
b = 45
c = 13
d = 10


## QUESTÃO 4

a) 1
b) 1
c) 1
d) 1
e) 1


## QUESTÃO 5

a) No while, a condição é testada antes de executar. Então ele pode não executar nenhuma vez.
No do-while, a condição é testada depois, então ele executa pelo menos uma vez.

b) O for é melhor quando já sabemos quantas vezes queremos repetir alguma coisa, como contar de 1 até 10.

c) É um erro de lógica. O ponto e vírgula faz o while ficar vazio. Se a condição continuar verdadeira, pode acontecer um loop infinito.


## QUESTÃO 6

a) A variável soma foi criada dentro do for. Por isso ela só existe dentro desse bloco e não pode ser usada no printf que está fora.

b) Os valores usados na soma são 1, 2, 3, 4, 6 e 7.
Quando i vale 5, o continue pula aquela repetição.
Quando i vale 8, o break encerra o laço.

c) Código corrigido:

#include <stdio.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }

        if (i == 8) {
            break;
        }

        soma = soma + i * i;
    }

    printf("Soma final = %d\n", soma);

    return 0;
}

Resultado: Soma final = 115