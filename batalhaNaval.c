#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios

    // DEFININDO AS VARIÁVEIS DE CONTROLE
    int posicao_linha, posicao_coluna;
    int linha = 5;
    int coluna = 5;

    // DEFININDO A MATRIZ - 0 = POSIÇÃO NEGATIVA / 1 = POSIÇÃO POSITIVA
    int tabuleiro[5][5] = {
        {0,0,0,0,0},
        {1,1,1,0,0},
        {0,0,0,0,1},
        {0,0,0,0,1},
        {0,0,0,0,1}
    };

    // MENSAGEM ADEQUADA PARA INÍCIO DO DESAFIO
    printf("\n\n-------------------------------- DESAFIO BATALHA NAVAL --------------------------------\n\n");
    
    // UM LOOP (REPETIÇÃO) PARA EXIBIR CADA POSIÇÃO DA MATRIZ E REVELANDO A POSIÇÃO DOS NAVIOS NA TELA DO USUÁRIO
    for (posicao_linha = 0; posicao_linha < linha; posicao_linha++) {
        for (posicao_coluna = 0; posicao_coluna < coluna; posicao_coluna++){
            // PRINTA CADA POSIÇÃO RECEBIDA DA MATRIZ
            printf("| %d ", tabuleiro[posicao_linha][posicao_coluna]);
        }
        // APENAS PARA FUNÇÃO ESTÉTICA
        printf("|");
        printf("\n");
    }

    return 0;
}
