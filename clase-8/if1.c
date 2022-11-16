#include<stdio.h>

int main(){

    // Entradas:
    int numero;
    printf("\n\t Escribe un numero entero: ");
    scanf("%d",&numero);

    // Control:
    if(numero>0){ // Condición
        printf("\n\t El numero es positivo"); // Salida
    }

    if(numero<0){
        printf("\n\t El numero es negativo"); // Salida
    }

    if(numero==0){
        printf("\n\t El numero es cero"); // Salida
    }

    printf("\n\n");
    return 0;
}