#include <stdio.h>

void insertionSort(int array[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > chave) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = chave;
    }
}

int buscaBinaria(int array[], int tamanho, int valor) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (array[meio] == valor) {
            return meio;
        }
        if (array[meio] < valor) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1;
}

int main() {
    int n, valor, resultado;

    printf("Digite a quantidade de números que deseja inserir: ");
    scanf("%d", &n);

    int array[n];

    printf("Digite os números:\n");
    for (int i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    insertionSort(array, n);

    printf("\nDigite o valor que deseja buscar: ");
    scanf("%d", &valor);

    resultado = buscaBinaria(array, n, valor);

    if (resultado != -1) {
        printf("Valor %d encontrado no índice %d.\n", valor, resultado);
    } else {
        printf("Valor %d não encontrado na lista.\n", valor);
    }

    return 0;
}
