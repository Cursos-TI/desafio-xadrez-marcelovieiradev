#include <stdio.h>

// Constantes que definem quantas casas cada peça vai se mover
#define BISHOP_STEPS 5
#define ROOK_STEPS   5
#define QUEEN_STEPS  8

int main(void) {
    int i;

    // =============================
    // Movimentação do Bispo (diagonal)
    // =============================
    printf("Movimentação do Bispo (%d casas na diagonal superior direita):\n", BISHOP_STEPS);
    // usando estrutura for
    for (i = 0; i < BISHOP_STEPS; i++) {
        // combinação de cima + direita
        printf("Cima\nDireita\n");  
    }
    printf("\n");

    // =============================
    // Movimentação da Torre (horizontal)
    // =============================
    printf("Movimentação da Torre (%d casas para a direita):\n", ROOK_STEPS);
    // usando estrutura while
    i = 0;
    while (i < ROOK_STEPS) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // =============================
    // Movimentação da Rainha (horizontal)
    // =============================
    printf("Movimentação da Rainha (%d casas para a esquerda):\n", QUEEN_STEPS);
    // usando estrutura do-while
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < QUEEN_STEPS);
    printf("\n");

    return 0;
}
