/******************************
  Programa Hola món en C
  Xavi Blanes 1r bat curs 25-26
******************************/

#include <stdio.h>
void main(){
    int a, b, mitjana;
    printf("1r núm?: ");
    scanf("%d", &a);
    printf("2n núm?: ");
    scanf("%d", &b);
    printf("La mitjana és: %d", (a+b)/2);
    return;
}
