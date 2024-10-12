#include <stdio.h>

int main() {
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    switch (idade) {
        case 0 ... 17:  
            printf("Menor de 18 anos\n");
            break;
        case 18 ... 65:  
            printf("Maior de 18 anos\n");
            break;
        default:  
            printf("Idoso\n");
            break;
    }

    return 0;
}
