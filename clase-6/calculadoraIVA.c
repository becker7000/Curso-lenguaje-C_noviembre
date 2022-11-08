#include<stdio.h>

int main(){

    // Entradas:
    float monto_sin_iva;
    float monto_con_iva;

    printf("\n\t Escribe un monto sin IVA: $");
    scanf("%f",&monto_sin_iva);

    // Cálculos:
    monto_con_iva=monto_sin_iva*1.16; // Calculamos el 116% 

    // Salidas:
    printf("\n\t El monto con IVA es: $%.2f",monto_con_iva);

    printf("\n\n");
    return 0;
}

/*
    Nota: Los numeros enteros y los numeros 
    flotantes no tienen las mismas reglas al momento
    de aplicarles algunos operadores, por ejemplo:

    Enteros:  10/3 = 3  , 10%3 = 1
    Flotantes: 10/3 = 3.333333, (la operación resto no aplica)
*/