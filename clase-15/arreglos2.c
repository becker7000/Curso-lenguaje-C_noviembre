#include<stdio.h>

int main(){

    //Otra forma de llenar un arreglo
    int num[]={17,15,-4,50,7}; // Inicializandolo al mismo tiempo que se declara
    int i;

    for(i=0;i<5;i++)
        printf("\n\t num[%d] = %d",i,num[i]);

    // i representa el índice 0-4
    // num[i] representa el valor en cada posición    

    printf("\n\n");
    return 0;
}