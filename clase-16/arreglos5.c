#include<stdio.h>

int main(){

    int i;
    int edades[7];

    // Llenar el arreglo desde el teclado:
    printf("\n\t Escribe las edades: \n");
    for(i=0;i<7;i++){
        printf("\n\t Edad #%d: ",i+1);
        scanf("%d",&edades[i]);
        system("cls"); // Limpiar la pantalla en windows
    }

    // Imprimiendo el conjunto de edades:
    printf("\n\t Las edades registradas son: \n");
    for(i=0;i<7;i++){
        printf("\n\t Edad #%d = %d",i+1,edades[i]);
    }

    printf("\n\n");
    return 0;
}