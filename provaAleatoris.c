/****************************************************************
 * Prova aleatoris                                              *
 * Xavi Blanes curs: 25/26                                      *
 ***************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int alea, i, zero = 0, u = 0;

    // Inicialitzar la llavor per als números aleatoris
    srand(time(NULL));

    // Omplir la matriu amb números aleatoris
    for(int i = 0; i < 10000; i++)
        {
            alea = rand() % 2; // números entre 0 i 1
            if (alea == 0) zero++;
            else u++;
        }

    // Imprimir la matriu
    printf("Percentatge de 0's: %.2f\n", zero/100.0);
    printf("Percentatge de 1's: %.2f\n", u/100.0);

    return 0;
}
