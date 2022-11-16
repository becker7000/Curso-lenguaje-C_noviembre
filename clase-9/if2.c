#include<stdio.h>

int main(){ 

    // 7,14,21,28,35,42,49
    int entero;
    printf("\n\t Dame un numero entero: ");
    scanf("%d",&entero);

    if(entero%7==0){
        printf("\n\t El numero es multiplo de 7");
        printf("\n\t Otra linea");
    }else
        printf("\n\t El numero no es multiplo de 7");

    printf("\n\n");
    return 0;
}