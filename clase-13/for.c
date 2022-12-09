#include<stdio.h>

int main(){

    float pesos, dolares;
    
    printf("\n\t Pesos  \t    Dolares");
    // Variable de control,condición,incremento
    for(pesos=20;pesos<=800;pesos+=20){
        dolares=pesos*0.052; // Formula para transformar de pesos a dolares
        printf("\n\t $%.2f  \t $%.2f",pesos,dolares);
    }
    
    printf("\n\n");
    return 0;
}