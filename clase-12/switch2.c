#include<stdio.h>
#include<stdlib.h> // Para que funcione exit(0)

int main(){

    int opcion; // Variable de selección 
    printf("\n\t +-------------+");
    printf("\n\t | 1) Suma     |");
    printf("\n\t | 2) Resta    |");
    printf("\n\t | 3) Multi    |");
    printf("\n\t | 4) Division |");
    printf("\n\t | 5) Salir    |");
    printf("\n\t +-------------+");
    printf("\n\t Opcion> ");
    scanf("%d",&opcion);

    float x,y; // Variables auxiliares
    printf("\n\t Escribe dos numeros, ejemplo 45.3 82.1: ");
    scanf("%f %f",&x,&y);
    switch(opcion){
        case 1:
            printf("\n\t Opcion sumar...");
            printf("\n\t %.3f + %.3f = %.3f",x,y,x+y);
            break;
        case 2:
            printf("\n\t Opcion restar....");
            break;
        case 3:
            printf("\n\t Opcion multiplicar...");
            break;
        case 4:
            printf("\n\t Opcion dividir...");
            break;
        case 5:
            printf("\n\t Hasta pronto...");
            printf("\n\n");
            exit(0);
            break;            
        default: // Opcional
            printf("\n\t Opcion no valida...");
            break; // Opcional
    }

    printf("\n\n");
    return 0;
}