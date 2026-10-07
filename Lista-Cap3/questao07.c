
#include <stdio.h>

int main() {
    int i;

    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n");

    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    printf("\n");

    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    return 0;
}
