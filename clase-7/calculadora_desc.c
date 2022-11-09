#include<stdio.h>

int main(){

    // Entradas:
    float monto_sin_desc, monto_con_desc; 
    printf("\n\t Dame un monto: $");
    scanf("%f",&monto_sin_desc);

    // Cálculos:
    monto_con_desc = monto_sin_desc*0.85;

    // Salidas:
    printf("\n\t El monto con descuento del 15%c es: $%.2f",37,monto_con_desc);

    printf("\n\n");
    return 0;
}