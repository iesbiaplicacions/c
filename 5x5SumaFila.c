#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    i, j, suma;
    int matriu[5][5];
    
    // Inicialitzar la llavor per als números aleatoris
    srand(time(NULL));

    // Omplir la matriu amb números aleatoris
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 4; j++) {
            matriu[i][j] = rand() % 100; // números entre 0 i 99
        }
    }

    // Imprimir la matriu
    printf("Matriu 5x5 amb numeros aleatoris:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%3d ", matriu[i][j]);
        }
        printf("\n");
    }

    return 0;
}
