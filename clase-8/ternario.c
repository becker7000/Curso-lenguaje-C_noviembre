#include<stdio.h>

int main(){

    // Entradas:
    int edad;
    printf("\n\t Dame tu edad: ");
    scanf("%d",&edad);

    // Cálculos, control y salidas
    (edad>=18)? printf("\n\t Eres mayor de edad"): printf("\n\t Eres menor de edad");

    printf("\n\n");
    return 0;
}