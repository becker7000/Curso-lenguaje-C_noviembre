#include<stdio.h>

int main(){

    // Entrada
    int x;
    int cuadrado;

    printf("\n\t Escribe un numero entero: "); //Instrucción
    scanf("%d",&x); // Guardando el valor de una variable

    // Cálculos
    cuadrado=x*x; 

    // Salida
    printf("\n\t %d elevado al cuadrado es %d",x,cuadrado);

    printf("\n\n");
    return 0;
}