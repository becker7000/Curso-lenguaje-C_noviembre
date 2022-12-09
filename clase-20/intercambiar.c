#include<stdio.h>

void intercambiar(int* a, int* b);

int main(){

    int x=10, y=17;
    printf("\n\t x = %d , y = %d",x,y);

    intercambiar(&x,&y); // Paso por referencia
    
    printf("\n\t x = %d , y = %d",x,y);

    printf("\n\n");
    return 0;
}

void intercambiar(int* a, int* b){ // Paso por referencia
    int aux;
    aux=*a; // Dame tu valor
    *a=*b;
    *b=aux;
}


/*

    Existen dos formas de pasar parametros a una función
    el paso por valor y el paso por referencia:

    Por valor: 
        sumar(num1,num2);

    Por referencia:
        sumar(&num1,&num2);

*/