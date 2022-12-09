#include<stdio.h>

/*
    Nota: Usamos while cuando sabemos 
    que debemos repetir un bloque de 
    código pero no sabemos cuantas veces
    exactamente, es decir, conocemos alguna 
    condición bajo la cual dejará de repetirse.
*/

int main(){

    int i=1; // Variable de control

    while(i<=10){ // Condición
        printf("\n\t Hola %d",i);
        i++; // Incremento
    }

    printf("\n\n");
    return 0;
}