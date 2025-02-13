#include <stdio.h>

// Constantes para o número de casas que cada peça pode se mover
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Função para movimentação do Bispo (diagonal superior direita)
void moverBispo() {
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("Diagonal Superior Direita - Passo %d\n", i);
    }
    printf("\n");
}