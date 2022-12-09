#include<stdio.h>

int main(){

    int i;

    printf("\n\t Pulsa una tecla para avanzar o 'u' para interrumpir: \n");
    for(i=1;i<=20;i++){
        printf("\n\t Repeticion #%d",i);
        if(getch()=='u'){
            printf("\n\t El ciclo fue interrumpido por usuario");
            break;
        } 
    }

    printf("\n\n");
    return 0;
}