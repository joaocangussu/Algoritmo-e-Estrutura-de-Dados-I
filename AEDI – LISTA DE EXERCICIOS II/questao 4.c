#include <stdio.h>
#include <stdbool.h>
#define TAMANHO_ARRAY_PRIMOS 25

bool ePrimo(int numero) {
    if (numero <= 1) return false;
    if (numero <= 3) return true;
    if (numero % 2 == 0 || numero % 3 == 0) return false;
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) return false;
    }
    return true;
}

void gerarPrimos(int primos[]) {
    int index = 0;
    for (int i = 2; i <= 100; i++) {
        if (ePrimo(i)) {
            primos[index++] = i;
        }
    }
}

int buscaBinaria(int array[], int tamanho, int chave) {
    int esquerda = 0;
    int direita = tamanho - 1;
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (array[meio] == chave) {
            return meio; 
        }
        if (array[meio] < chave) {
            esquerda = meio + 1; 
        } else {
            direita = meio - 1; 
        }
    }
    return -1; 
}

int main() {
    int primos[TAMANHO_ARRAY_PRIMOS];
    int numero, resultado;

    gerarPrimos(primos);

    printf("Digite um número entre 1 e 100: ");
    scanf("%d", &numero);

    resultado = buscaBinaria(primos, TAMANHO_ARRAY_PRIMOS, numero);

    if (resultado != -1) {
        printf("O número %d é primo e está na lista de primos.\n", numero);
    } else {
        printf("O número %d não está na lista de primos.\n", numero);
    }

    return 0;
}
