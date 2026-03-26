/****************************************************************
 * Funció identitat que diu si una matriu és identitat o no     *
 * Xavi Blanes curs: 25/26                                      *
 ***************************************************************/

#include <stdio.h>

int identitat(int m[10][10], int dimensio);

int main() {
    int matriu[10][10] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    if(identitat(matriu,3)) printf("Identitat\n");
    else printf("No identitat\n");
    return 0;
}

int identitat(int m[10][10], int dimensio){
int i, j, esIdentitat;
esIdentitat = 1; // Inicialitze la variable booleana a true
for(i = 0; i < dimensio; i++)
        for(j = 0; j < dimensio; j++)
            if(i == j) esIdentitat = esIdentitat && (m[i][j] == 1);
            else esIdentitat = esIdentitat && (m[i][j] == 0);
return esIdentitat;
}
