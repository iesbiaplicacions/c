/****************************************************************
 * La calculadora amb un menú per a + - * i /                   *
 * Xavi Blanes curs: 25/26                                      *
 * Completa el codi...                                          *
 * *************************************************************/

#include <stdio.h>

int sumar(int a, int b)
{
    return a + b;
}

void main(){
    int m, n, opcio;
    printf("Introduix el primer número: ");
    scanf("%d", &m);
    printf("Introduix el segon número: ");
    scanf("%d", &n);
    do{
        printf("Quina operació vols fer --> 1 (suma), 2(resta), 3 (multiplicació) i 4 (divisió): ");
        scanf("%d", &opcio);
    }while((opcio<1) || (opcio >4));
    
    /* implementació del menú amb ifs */
    
    if(opcio == 1) printf("La suma és: %d\n", sumar(m,n));
       
    return;
}
