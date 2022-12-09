#include<stdio.h>

int main(){

    int numero;

    printf("\n\t Solo los siguientes numeros son validos: ");
    printf("\n\t [1,2,3,4,5,6,7,14,15,16,17,18]\n");

    do{
        printf("\n\t Numero: ");
        scanf("%d",&numero);
    }while( numero<1 || (numero>7 && numero<14) || numero>18 );

    printf("\n\t El numero esta dentro del rango aceptado...");

    printf("\n\n");
    return 0;
}