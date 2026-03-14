/****************************************************************
 * Matriu de 5x5 d'enters aleatoris                             *
 * Xavi Blanes curs: 25/26                                      *
 ***************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j;
    int matriu[5][5];
    
    // Inicialitzar la llavor per als números aleatoris
    srand(time(NULL));

    // Omplir la matriu amb números aleatoris
    for(int i = 0; i < 5; i++) 
        for(int j = 0; j < 5; j++) 
            matriu[i][j] = rand() % 100; // números entre 0 i 99

    // Imprimir la matriu
    printf("Matriu 5x5 amb numeros aleatoris:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) 
            printf("%3d ", matriu[i][j]);
        printf("\n");
    }

    return 0;
}
