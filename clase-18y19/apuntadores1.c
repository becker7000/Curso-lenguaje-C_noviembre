#include<stdio.h>

int main(){

    int natural = 75;
    int* p_nat = &natural; // Direccionamiento

    // Usando la variable:
    printf("\n\t Nat = %d, Dir: %p",natural,&natural);

    // Usando su apuntador:
    printf("\n\t Direccion apuntada: %p",p_nat);
    printf("\n\t Direccion del apuntador : %p",&p_nat);
    printf("\n\t Valor dentro de la direccion apuntada: %d",*p_nat);

    // & quiere decir: dame tu direccion
    // * quiere decir: dame tu valor

    printf("\n\n");
    return 0;
}