#include<stdio.h>

int main(){

    // Entradas:
    float masa, estatura, imc;

    printf("\n\t Escribe tu masa (kg): ");
    scanf("%f",&masa);

    printf("\n\t Escribe tu estatura (m): ");
    scanf("%f",&estatura);

    // Cálculos:
    imc = masa / (estatura*estatura);

    // Salidas:
    printf("\n\t Tu indice de masa corporal es: %.2f",imc);

    printf("\n\n");
    return 0;
}