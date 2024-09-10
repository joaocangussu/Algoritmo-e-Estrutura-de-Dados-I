#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_TENTATIVAS 7
#define MAX_TAMANHO_PALAVRA 10

bool buscaLinear(char palavra[], int tamanho, char letra, int posicoes[]) {
    bool encontrado = false;
    for (int i = 0; i < tamanho; i++) {
        if (palavra[i] == letra) {
            posicoes[i] = 1;
            encontrado = true;
        }
    }
    return encontrado;
}

void exibirPalavra(char palavra[], int tamanho, int posicoes[]) {
    for (int i = 0; i < tamanho; i++) {
        if (posicoes[i]) {
            printf("%c ", palavra[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    char palavraSecreta[MAX_TAMANHO_PALAVRA + 1];
    int tamanhoPalavra;
    int tentativasRestantes;
    int posicoesLetras[MAX_TAMANHO_PALAVRA];
    char letraInformada;
    bool letraEncontrada;

    memset(posicoesLetras, 0, sizeof(posicoesLetras));

    printf("Digite a palavra (até %d caracteres): ", MAX_TAMANHO_PALAVRA);
    scanf("%s", palavraSecreta);

    tamanhoPalavra = strlen(palavraSecreta);

    tentativasRestantes = tamanhoPalavra + 2;

    while (tentativasRestantes > 0) {
        exibirPalavra(palavraSecreta, tamanhoPalavra, posicoesLetras);

        printf("Digite uma letra: ");
        scanf(" %c", &letraInformada);

        letraEncontrada = buscaLinear(palavraSecreta, tamanhoPalavra, letraInformada, posicoesLetras);

        if (letraEncontrada) {
            printf("A letra '%c' está na palavra!\n", letraInformada);
        } else {
            tentativasRestantes--;
            printf("A letra '%c' não está na palavra. Tentativas restantes: %d\n", letraInformada, tentativasRestantes);
        }

        bool palavraDescoberta = true;
        for (int i = 0; i < tamanhoPalavra; i++) {
            if (!posicoesLetras[i]) {
                palavraDescoberta = false;
                break;
            }
        }

        if (palavraDescoberta) {
            printf("Parabéns! Você descobriu a palavra: %s\n", palavraSecreta);
            break;
        }
    }

    if (tentativasRestantes <= 0) {
        printf("Fim de jogo! A palavra era: %s\n", palavraSecreta);
    }

    return 0;
}
