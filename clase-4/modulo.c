#include<stdio.h>

int main(){

    // Declaramos e inicializamos los segundos:
    int segundos=200;
    int minutos; // Declaración

    // Cálculos:
    minutos=segundos/60; // 3
    segundos=segundos%60; // 20

    // Salidas:
    printf("\n\t Minutos: %d",minutos);
    printf("\n\t Segundos: %d",segundos);

    printf("\n\t %d minutos con %d segundos",minutos,segundos);

    printf("\n\n");
    return 0;
}