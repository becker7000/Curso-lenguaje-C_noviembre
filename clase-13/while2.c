#include<stdio.h>

int main(){

    int numero=65; // a

    // Imprimiendo con un ciclo while el alfabeto 
    // Decimal,Caracter,Hexadecimal
    printf("\n\t DEC \t CAR \t HEX");
    while(numero<=90){ // Condición
        printf("\n\t %d \t %c \t %x",numero,numero,numero);
        numero++; // Incremento paso 1
    }

    printf("\n\n");
    return 0;
}