#include<stdio.h>

int main(){

    int num[5]; // Declarando un arreglo de 5 enteros
    int i;

    // Llenando el arreglo de forma manual:
    num[0]=17; // Los indices de un arreglo tiene lógica 0
    num[1]=15;
    num[2]=-4;
    num[3]=50;
    num[4]=7; // El último elemento será el tamaño-1 (5-1=4)

    // %p (p: pointer) se usa para imprimir direcciones (valores de apuntadores)
    for(i=0;i<5;i++)
        printf("\n\t Elem #%d: Valor = %d | Dir: %p",i,num[i],&num[i]);

    printf("\n\n");
    return 0;
}