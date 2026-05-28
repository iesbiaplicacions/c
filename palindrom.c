/* ********************************
 * Palíndrom en C curs 1bat 25/26 *
 * *******************************/

#include <stdio.h>   // Inclou les funcions d'entrada i sortida (printf, fgets)
#include <string.h>  // Inclou les funcions de manipulació de cadenes (strlen)
 
int main() {
    int i, j, lon;          // Variables: i i j per recorregut, lon no s'utilitza realment
    char paraula[20];        // Array per emmagatzemar la paraula (fins a 19 caràcters + '\0')
    
    printf("Introdueix la paraula: "); // Missatge a l'usuari
    fgets(paraula, 20, stdin);        // Llegeix la paraula de l'entrada estàndard (stdin)
                                       // fgets inclou el '\n' si hi cap a l'array

    i = 0;                             // Inici de l'índex des del principi
    j = strlen(paraula) - 1;           // Final de l'índex (últim caràcter, abans del '\0')

    // Bucle per comprovar si la paraula és palíndrom
    // Compararà el primer i l'últim caràcter, avançant i retrocedint
    while ((i < j) && (paraula[i] == paraula[j-1])) {
        i++;    // Avança el punter del principi
        j--;    // Retrocedeix el punter del final
    }

    // Comprovació final: si i < j, significa que hi ha diferències
    if (i < j)
        printf("No palíndrom\n");  // La paraula no és palíndrom
    else
        printf("Palíndrom\n");     // La paraula és palíndrom
    
    return 0;   // Final del programa
}
