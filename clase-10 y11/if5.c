#include<stdio.h>
//#define PI 3.141592; // Constante definida
#define TAR1 1.2
#define TAR2 1.5
#define TAR3 1.8

/*  REGLAS DE NEGOCIO:
    1) si consumo<800kWh se cobra TAR1
    2) si 800kWh<=consumo<=1450kWh se cobra TAR2
    3) si consumo>1450kWh se cobra TAR3

*/

int main(){

    //const int CONSTANTE; // Constante declarada
    //printf("\n\t Escribe un entero: ");
    //scanf("%d",&CONSTANTE);
    //CONSTANTE=10; // Esto daría un error

    float consumo,tarifa,monto;
    printf("\n\t Escribe tu consumo de electricidad en kWh: ");
    scanf("%f",&consumo);

    if(consumo<800){
        tarifa=TAR1;
    }else if(consumo>=800 && consumo<=1450){
        tarifa=TAR2;
    }else{ //consumo>1450
        tarifa=TAR3;
    }

    monto=tarifa*consumo;
    printf("\n\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t %c  >>>>>REPORTE<<<<<   %c",186,186); // alt+shift+abajo
    printf("\n\t %c Consumo: %.2fkWh   %c",186,consumo,186);
    printf("\n\t %c Tarifa: $%.1f         %c",186,tarifa,186);
    printf("\n\t %c Monto: $%.2f       %c",186,monto,186);
    printf("\n\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

    printf("\n\n");
    return 0;
}