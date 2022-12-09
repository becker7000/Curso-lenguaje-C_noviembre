#include<stdio.h>

int main(){

    int edad;

    do{
        printf("\n\t Escribe tu edad: ");
        scanf("%d",&edad);
    }while(edad<15 || edad>60);

    printf("\n\t Edad valida...");

    printf("\n\n");
    return 0;
}