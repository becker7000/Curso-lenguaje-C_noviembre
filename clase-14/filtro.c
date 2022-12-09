#include<stdio.h>
#include<stdlib.h>

int main(){

    int opcion;
    printf("\n\t +------------------+");
    printf("\n\t | Menu |||||||||||||");
    printf("\n\t | 1) Opcion uno    |");
    printf("\n\t | 2) Opcion dos    |");
    printf("\n\t | 3) Opcion tres   |");
    printf("\n\t | 4) Opcion salir  |");
    printf("\n\t +------------------+");
    
    do{ // Filtra los datos:
        printf("\n\t Opcion [1-4]: ");
        scanf("%d",&opcion);
    }while(opcion<1 || opcion>4); // Las condiciones son mutuamente excluyentes

    switch(opcion){
        case 1:
            printf("\n\t Soy la primera opcion...");
            break;
        case 2:
            printf("\n\t Soy la segunda opcion...");
            break;
        case 3:
            printf("\n\t Soy la tercera opcion...");
            break;
        case 4:
            printf("\n\t Hasta pronto...");
            printf("\n\n");
            exit(0); // Termina el programa   
        default:
            printf("\n\t Opcion no valida...");
            break;           
    }   
    
    printf("\n\n");
    return 0;
}