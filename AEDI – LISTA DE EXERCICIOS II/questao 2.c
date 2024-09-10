#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CRIANCAS 50
#define MIN_NOTA 1
#define MAX_NOTA 5

void gerarNotas(int notas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        notas[i] = rand() % (MAX_NOTA - MIN_NOTA + 1) + MIN_NOTA;
    }
}

void notasBuscaLinear(int notas[], int tamanho, int contagem[]) {
    for (int i = 0; i < MAX_NOTA; i++) {
        contagem[i] = 0;
    }
    
    for (int i = 0; i < tamanho; i++) {
        int nota = notas[i];
        for (int j = 0; j < MAX_NOTA; j++) {
            if (nota == (j + 1)) {
                contagem[j]++;
                break;
            }
        }
    }
}

void mostrarContagem(int contagem[]) {
    for (int i = 0; i < MAX_NOTA; i++) {
        printf("Nota %d foi atribuída %d vez(es).\n", i + 1, contagem[i]);
    }
}

int main() {
    int notas[NUM_CRIANCAS];
    int contagem[MAX_NOTA];


    srand(time(NULL));
    gerarNotas(notas, NUM_CRIANCAS);
    notasBuscaLinear(notas, NUM_CRIANCAS, contagem);
    mostrarContagem(contagem);

    return 0;
}
