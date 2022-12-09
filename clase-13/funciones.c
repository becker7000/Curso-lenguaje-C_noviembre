#include<stdio.h>

int suma(int a,int b);

int main(){

    printf("\n\t La suma de 4 + 67 = %d",suma(4,67));

    printf("\n\n");
    return 0;
}

int suma(int a, int b){
    int suma=a+b;
    return suma;
}