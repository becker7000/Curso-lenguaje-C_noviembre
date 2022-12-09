#include<stdio.h>

int factorial(int natural); // 1/2 !

int main(){

    printf("\n\t 4! = %d",factorial(4));
    printf("\n\t 10! = %d",factorial(10));
    printf("\n\t 15! = %d",factorial(15)); // 0 al 15
    printf("\n\t 20! = %d",factorial(20)); // Error


    printf("\n\n");
    return 0;
}

int factorial(int natural){
    if(natural<=1){ // Caso base
        return 1;
    }else{ // Llamada recursiva o relación de recurrencia
        return factorial(natural-1)*natural;
    }
}

// La función factorial crece más rápido de la exponecial:
// 4! = 4*3*2*1 = 24
// 5! = 5*4*3*2*1 = 120 
// 6! = 6*5*4*3*2*1 = 720
