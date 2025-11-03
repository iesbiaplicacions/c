/*************************************
 * Programa que calcula el factorial *
 * Xavi Blanes PXSI-25/26            *
 * **********************************/

#include <stdio.h>

int factorial(int n)
{
    int aux;
    if(n==1) aux=1;
    else aux=n*factorial(n-1);
    return aux;
}

void main(){
    int n;
    printf("Factorial de: ");
    scanf("%d",&n);
    printf("%d\n", factorial(n));
    return;
}
