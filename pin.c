/***************************
programa en C que implementa
el pin sense repetició      
Xavi Blanes curs:25/26   
***************************/
#include <stdio.h>
void main(){
int resposta;
printf("Pin?: ");
scanf("%d", &resposta);
if(resposta==1234)
    printf("Ok!\n");
else printf("Incorrecte!\n");
return;
}
