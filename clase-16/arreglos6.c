#include<stdio.h>

int main(){

    const int TAM; // Constante declarada
    int i;

    printf("\n\t Cuantos numeros? ");
    printf("\n\t => ");
    scanf("%d",&TAM);
    int numeros[TAM]; // Declaramos el arreglo

    printf("\n\t Escribe los numeros para guardarlos: \n");

    for(i=0;i<TAM;i++){
        printf("\n\t Dato #%d: ",i+1);
        scanf("%d",numeros[i]);

        //TODO: contar los ceros
        //TODO: contar los positivos y agregarlos a una suma (suma_pos)
        //TODO: contar los negativos y agregarlos a una suma (suma_neg)

    }

    // TODO: imprimir los datos

    printf("\n\n");
    return 0;
}

/*
    Dado un arreglo por el usuario:
    1. Imprimir el arreglo
    2. Cuantos negativos
    3. Cuantos positivos
    4. Cuantos ceros
    5. Suma de los positivos
    6. Suma de los negativos

*/