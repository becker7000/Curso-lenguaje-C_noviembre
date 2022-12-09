#include<stdio.h>

int suma_gauss(int natural);

int main(){

    printf("\n\t La suma del 1 al 10 es: %d",suma_gauss(10));

    printf("\n\n");
    return 0;
}

// 1+2+3+4+...+100=5050
// n(n+1)/2 
// 100(100+1)/2 = (100*101)/2 = 50*101 = 5050

// Recursividad: es la propiedad que tiene una función de mandarse a llamar a 
// si misma.

// Función recursiva:
int suma_gauss(int natural){
    // Existen dos casos: 
    if(natural==1){ // Caso base
        return 1;
    }else{ // Caso recursivo
        return suma_gauss(natural-1)+natural;
    }
}

/*
    sum(10)= sum(9)+10 = sum(8)+9+10 = sum(7)+8+9+10 = 
    =sum(6)+7+8+9+10 =...= sum(1)+2+3+4+5+6+7+8+9+10
    = 1+2+3+4+5+6+7+8+9+10 = 55
*/

/*
    Ventajas: 
        El código es corto
        El fácil de implementar
    Desventajas:
        Puede volcar la memoria 
        Hay un límite de llamadas recursivas
*/