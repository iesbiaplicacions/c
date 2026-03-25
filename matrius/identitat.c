/****************************************************************
 * Funció identitat que diu si una matriu és identitat o no     *
 * Xavi Blanes curs: 25/26                                      *
 ***************************************************************/



#include <stdio.h>

int identitat(int m[10][10], int dimensio);

int main() {
    int i, j;
    int matriu[10][10] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    if(identitat(matriu,3)) printf("Identitat\n");
    else printf("No identitat\n");
    return 0;
}

int identitat(int m[10][10], int dimensio){
int i, j, id;
id = 1;
for(i = 0; i < dimensio; i++)
        for(j = 0; j < dimensio; j++)
            if(i == j) id = id && (m[i][j] == 1);
            else id = id && (m[i][j] == 0);
return id;
}
