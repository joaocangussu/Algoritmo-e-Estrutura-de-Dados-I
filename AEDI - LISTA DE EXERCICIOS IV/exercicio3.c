#include <stdio.h>

void insertionSort(float array[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        float chave = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > chave) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = chave;
    }
}

int main() {
    int n;

    printf("Digite o número de produtos: ");
    scanf("%d", &n);

    float precos[n];

    printf("Digite os preços dos produtos:\n");
    for (int i = 0; i < n; i++) {
        printf("Preço do produto %d: ", i + 1);
        scanf("%f", &precos[i]);
    }

    insertionSort(precos, n);

    printf("\nLista de preços atualizada:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", precos[i]);
    }
    printf("\n");

    return 0;
}
