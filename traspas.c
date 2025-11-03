/***************************
programa en C que implementa
el programa d'any de traspàs
Xavi Blanes curs:25/26
***************************/

#include <stdio.h>
int main(){
    int any;
    printf("Introdueix l'any: ");
    scanf("%d", &any);
    if(any%4==0)
        if(any%100==0)
            if(any%400==0)
                printf("Sí q és de traspàs\n");
            else printf("No és de traspàs\n");
        else printf("Sí q és de traspàs\n");
    else printf("No és de traspàs\n");
    return 0;
}
