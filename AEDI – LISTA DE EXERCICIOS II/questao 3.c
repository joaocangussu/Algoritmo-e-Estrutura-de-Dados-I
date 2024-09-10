#include <stdio.h>

#define NUM_CONTAS 100

int buscaBinaria(int contas[], int tamanho, int contaProcurada, int *comparacoes) {
    int esquerda = 0;
    int direita = tamanho - 1;
    *comparacoes = 0; 

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        (*comparacoes)++; 

        if (contas[meio] == contaProcurada) {
            return meio; 
        }
        if (contas[meio] < contaProcurada) {
            esquerda = meio + 1; 
        } else {
            direita = meio - 1; 
        }
    }
    return -1; 
}

int main() {
    int contas[NUM_CONTAS];
    int contaProcurada;
    int comparacoes;
    int resultado;

    for (int i = 0; i < NUM_CONTAS; i++) {
        contas[i] = 1000 + i;
    }

    printf("Digite o número da conta a ser pesquisada: ");
    scanf("%d", &contaProcurada);

    resultado = buscaBinaria(contas, NUM_CONTAS, contaProcurada, &comparacoes);

    if (resultado != -1) {
        printf("Conta %d encontrada na posição %d.\n", contaProcurada, resultado);
    } else {
        printf("Conta %d não encontrada.\n", contaProcurada);
    }
    printf("Número de comparações realizadas: %d\n", comparacoes);

    return 0;
}
