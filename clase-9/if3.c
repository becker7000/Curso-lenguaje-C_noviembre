#include<stdio.h>

int main(){

    char letra;
    printf("\n\t %cCon que estilo se declaran las constantes en programacion?",168);
    printf("\n\t +------------------+"); // alt+shift+abajo
    printf("\n\t | a) camell case   |"); // varUno
    printf("\n\t | b) snake case    |"); // var_uno
    printf("\n\t | c) mayusculas    |"); // PI
    printf("\n\t +------------------+");
    printf("\n\t opcion> ");
    scanf("%c",&letra);

    if(letra=='c'){
        printf("\n\t Respuesta correcta");
    }else{
        printf("\n\t Respuesta incorrecta");
    }

    printf("\n\n");
    return 0;
}