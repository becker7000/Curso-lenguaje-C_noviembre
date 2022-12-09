#include<stdio.h>
#include<time.h>

void llenar(int a[], int N);
void imprimir(int a[], int N);
void triplicar(int a[], int N);

int main(){

    srand(time(NULL));

    int arg_1[10];
    int arg_2[12];

    // Trabajando con el primer arreglo:
    printf("\n\n\t Arreglo 1: ");
    llenar(arg_1,10);
    imprimir(arg_1,10);

    // Trabajando con el segundo arreglo:
    printf("\n\n\t Arreglo 2: ");
    llenar(arg_2,12);
    imprimir(arg_2,12);

    // Multiplicando por 3 los elementos del arreglo 2:
    printf("\n\n\t Arreglo 2 multiplicado por 3: ");
    triplicar(arg_2,12);
    imprimir(arg_2,12);

    printf("\n\n");
    return 0;
}

void llenar(int a[], int N){
    register int i;
    for(i=0;i<N;i++){
        a[i]=rand()%50;
    }
}

void imprimir(int a[], int N){
    register int i;
    printf("\n\t ");
    for(i=0;i<N;i++){
        printf("  %d",a[i]);
    }
}

void triplicar(int a[],int N){
    register int i;
    for(i=0;i<N;i++){
        a[i]*=3; // Multiplicamos por 3 cada elemento del arreglo
    }
}