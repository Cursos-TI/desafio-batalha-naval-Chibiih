#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Scheilla Vieira

int main() {

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    // Nível novato e adicionando o nivel aventureiro
     // Representando o tabuleiro com a matriz (10x10)
     int tabuleiro[10][10];

     // Inicializando todas as posições com 0, indicando a água
     for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++) {
             tabuleiro[i][j] = 0;
         }
     }
 
     // Tamanho fixo dos navios
     int tamanhoNavio = 3;

     // Declaração dos navios
     int navio_horizontal[3] = {3, 3, 3};
     int navio_vertical[3] = {3, 3, 3};

     // Coordenadas dos navios
    int linha_navio_horizontal = 2; 
    int coluna_navio_horizontal = 4; 
    int linha_navio_vertical = 5; 
    int coluna_navio_vertical = 7;

    // Posicionando o navio horizontal no tabuleiro
    for (int i = 0; i < tamanhoNavio; i++) {
        if (coluna_navio_horizontal + i < 10) {
            tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = navio_horizontal[i];
        }
    }

    // Posicionando o navio vertical no tabuleiro
    for (int i = 0; i < tamanhoNavio; i++) {
        if (linha_navio_vertical + i < 10) {
            tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] = navio_vertical[i];
        }
    }
    // Navio diagonal --- Nivel aventureiro
    int navio_diagonal1[3] = {3, 3, 3};
    int navio_diagonal2[3] = {3, 3, 3};

    // Coodernadas do navio diagonal
    int linha_navio_diagonal1 = 1;
    int coluna_navio_diagonal1 = 1;
    int linha_navio_diagonal2 = 0;
    int coluna_navio_diagonal2 = 9;

    //Posicionando
    for (int i = 0; i < tamanhoNavio; i++) {
        if ((linha_navio_diagonal1 + i < 10) && (coluna_navio_diagonal1 + i < 10)) {
            tabuleiro[linha_navio_diagonal1 + i][coluna_navio_diagonal1 + i] = navio_diagonal1[i];
        }
    }

    for (int i = 0; i < tamanhoNavio; i++) {
        if ((linha_navio_diagonal2 + i < 10) && (coluna_navio_diagonal2 - i >= 0)) {
            tabuleiro[linha_navio_diagonal2 + i][coluna_navio_diagonal2 - i] = navio_diagonal2[i];
        }
    }

    // Exibindo o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
