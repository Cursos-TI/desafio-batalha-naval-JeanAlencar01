#include <stdio.h>
#define TAM 10 // tamanho do tabuleiro

int main (){
    int tabuleiro [TAM][TAM] = {{0}};

    //definir navios
    int navio1X = 2;
    int navio1Y = 2;
    int tamanhoNavio1 = 3;

    int navio2X = 7;
    int navio2Y = 7;
    int tamanhoNavio2 = 3;

    int navio3X = 6;
    int navio3Y = 1;
    int tamanhoNavio3 = 3;

    int navio4X = 5;
    int navio4Y = 5;
    int tamanhoNavio4 = 3;

// Posicionando navios no tabuleiro

// Navio 1 (Vertical)
for (int i = 0; i < tamanhoNavio1; i++) {
    if (navio1X + i < TAM) {
        tabuleiro[navio1X + i][navio1Y] = 3;
    }
}

// Navio 2 (Horizontal)
for (int i = 0; i < tamanhoNavio2; i++) {
    if (navio2Y + i < TAM) {
        tabuleiro[navio2X][navio2Y + i] = 3;
    }
}

// Navio 3 (Diagonal 1)
for (int i = 0; i < tamanhoNavio3; i++) {
    if (navio3X + i < TAM && navio3Y + i < TAM) {
        tabuleiro[navio3X + i][navio3Y + i] = 3;
    }
}

// Navio 4 (Diagonal 2)
for (int i = 0; i < tamanhoNavio4; i++) {
    if (navio4X - i >= 0 && navio4Y + i < TAM) {
        tabuleiro[navio4X - i][navio4Y + i] = 3;
    }
}


    // imprimir coordenadas dos navios
    printf ("Navio 1 (vertical):\n");
    for (int i = 0; i < tamanhoNavio1; i++){
        printf("(%d, %d)\n", navio1X + i, navio1Y);
    }

    printf("\nNavio 2 (horizontal):\n");
    for (int i = 0; i < tamanhoNavio2; i++){
        printf("(%d,%d)\n", navio2X, navio2Y + i);
    }

    printf("\nNavio 3 (diagonal 1):\n");
    for (int i = 0; i < tamanhoNavio3; i++){
        printf("(%d,%d)\n", navio3X + i, navio3Y + i);
    }

    printf("\nNavio 4 (diagonal 2):\n");
    for (int i = 0; i <tamanhoNavio4; i++){
        printf("(%d,%d)\n", navio4X - i, navio4Y +i);
    }

    // imprimir tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}