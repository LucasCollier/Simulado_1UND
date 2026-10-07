# Lista Capítulo 3 - Respostas Teóricas

## Questão 1

**a)** O while verifica a condição antes de executar, então pode não executar nenhuma vez. O do-while executa pelo menos uma vez, porque verifica a condição no final.

**b)** O for é melhor quando sabemos quantas vezes vamos repetir. O while é usado quando não sabemos a quantidade de repetições. O do-while é bom quando precisamos executar pelo menos uma vez.

**c)** É um erro de lógica, não de compilação. O ponto e vírgula faz o laço ficar vazio. Se a condição continuar verdadeira, o programa fica repetindo sem executar nenhum comando dentro do laço.

## Questão 2

**a)** Porque a variável soma foi criada dentro do for. Fora dele, ela não existe e o printf não consegue acessá-la.

**b)** Porque soma recebe zero toda vez que o laço repete. Assim, ela não acumula os resultados anteriores.

**c)** Código corrigido:

```c
#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    return 0;
}
```

A variável soma precisa ficar fora do for para guardar os valores de todas as repetições. O escopo define onde uma variável pode ser usada. Uma variável criada dentro de um bloco só pode ser acessada naquele bloco e normalmente deixa de existir quando ele termina.

## Questão 3

**a)** A sequência impressa será:

36 18 9 4 2 1

**b)** O programa lê caracteres até o usuário digitar X. O `ch + 1` representa o próximo caractere na tabela de códigos. Os parênteses garantem que o caractere seja armazenado em ch antes de ser comparado com X.

**c)** Podemos usar o comando break dentro de uma condição para interromper o laço.

## Questão 4

**a)** O break encerra o laço imediatamente e o programa continua depois dele.

**b)** O continue pula o restante da repetição atual. No for, ele vai para a expressão de incremento antes de verificar novamente a condição.

**c)** Apenas o laço interno é encerrado. O laço externo continua normalmente.

## Questão 5

**a)** O laço executa 5 vezes.

**b)** Saída:

```text
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

**c)** Código com while:

```c
#include <stdio.h>

int main() {
    int i = 0, j = 10;

    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        i++;
        j--;
    }

    return 0;
}
```

## Questão 6

**a)** O valor final de x será 6.

**b)** O x++ compara primeiro e aumenta depois.

- Com x = 0, compara 0 com 5 e aumenta para 1.
- Com x = 1, compara 1 com 5 e aumenta para 2.
- Com x = 2, compara 2 com 5 e aumenta para 3.
- Com x = 3, compara 3 com 5 e aumenta para 4.
- Com x = 4, compara 4 com 5 e aumenta para 5.
- Com x = 5, a condição é falsa, mas x ainda aumenta para 6.

**c)** Código reescrito:

```c
#include <stdio.h>

int main() {
    int x = 0;

    while (x <= 5) {
        x++;
    }

    printf("Valor final de x = %d\n", x);

    return 0;
}
```