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

// Função para movimentação da Torre (para a direita)
void moverTorre() {
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= TORRE_MOV; i++) {
        printf("Direita - Passo %d\n", i);
    }
    printf("\n");
}

// Função para movimentação da Rainha (para a esquerda)
void moverRainha() {
    printf("Movimentação da Rainha:\n");
    for (int i = 1; i <= RAINHA_MOV; i++) {
        printf("Esquerda - Passo %d\n", i);
    }
    printf("\n");
}