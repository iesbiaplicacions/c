#include <stdio.h>

int identitat(int m[][], int dimensio);

int main() {
    int i, j;
    int matriu[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    if(identitat(matriu,3)) printf("Identitat\n");
    else printf("No identitat\n")
    return 0;
}

int identitat(int m[][], int dimensio){
int i, j, id;
id = true;
for(int i = 0; i < dimensio; i++)
        for(int j = 0; j < dimensio; j++)
            if(i == j) id = id && (m[i][j] == 1);
            else id = id && (m[i][j] == 0);
return id;
}
