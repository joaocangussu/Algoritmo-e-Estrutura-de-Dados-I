#include <stdio.h>

int main() {
    int numero;

    printf("Informe um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Informe um número positivo.\n");
    } else {
        printf("Números pares entre 1 e %d:\n", numero);
        for (int i = 1; i <= numero; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
