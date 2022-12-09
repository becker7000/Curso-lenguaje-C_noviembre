#include<stdio.h>
#include<time.h> // para la función time()

int main(){

    int aleatorios[10];
    int i;

    // Modificamos la semilla de la función rand()
    srand(time(NULL));

    // Llenamos el arreglo automaticamente
    // con numeros aleatrios
    // al mismo tiempo lo vamos imprimiendo
    for(i=0;i<10;i++){
        aleatorios[i]=rand()%40+10; // numeros aleatorios del 10 al 40
        printf("\n\t a[%d] = %d",i,aleatorios[i]);
    }

    printf("\n\n");
    return 0;
}