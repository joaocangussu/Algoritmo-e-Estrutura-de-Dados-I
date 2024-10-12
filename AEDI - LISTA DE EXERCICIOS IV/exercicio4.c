#include <stdio.h>

void selectionSortDecrescente(float array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int max_idx = i; 
        for (int j = i + 1; j < tamanho; j++) {
            if (array[j] > array[max_idx]) {
                max_idx = j;
            }
        }
        if (max_idx != i) {
            float temp = array[i];
            array[i] = array[max_idx];
            array[max_idx] = temp;
        }
    }
}

int main() {
    int n;

    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    float notas[n];

    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    selectionSortDecrescente(notas, n);

    printf("\nNotas em ordem decrescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    return 0;
}
