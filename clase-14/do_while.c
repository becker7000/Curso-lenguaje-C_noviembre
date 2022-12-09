#include<stdio.h>

int main(){

    int i=5; // Variable de control
    do{
        printf("\n\t Hola %d",i);
        i--; // Incremento
    }while(i>=1); // Condición

    printf("\n\n");
    return 0;
}
/*
    do-while ejecuta al menos una vez el bloque
    de código que contiene...
*/