#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Scheilla Vieira

int main() {
    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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

    // Nível novato
     // Representando o tabuleiro com a matriz (10x10)
     int tabuleiro[10][10];

     // Inicializando todas as posições com 0, indicando a água
     for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++) {
             tabuleiro[i][j] = 0;
         }
     }
 
     // Declaração dos navios
     int navio_horizontal[3] = {3, 3, 3};
     int navio_vertical[3] = {3, 3, 3};

     // Coordenadas iniciais para o navio horizontal
    int linha_navio_horizontal = 2; 
    int coluna_navio_horizontal = 4; 

    // Coordenadas iniciais para o navio vertical
    int linha_navio_vertical = 5; 
    int coluna_navio_vertical = 7;

    // Posicionando o navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        if (coluna_navio_horizontal + i < 10) {
            tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = navio_horizontal[i];
        }
    }

    // Posicionando o navio vertical no tabuleiro
    for (int i = 0; i < 3; i++) {
        if (linha_navio_vertical + i < 10) {
            tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] = navio_vertical[i];
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
