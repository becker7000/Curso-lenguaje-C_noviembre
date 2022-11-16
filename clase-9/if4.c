#include<stdio.h>

int main(){

    char letra;
    printf("\n\t Dame una letra: ");
    scanf("%c",&letra);

    if(letra=='a'){
        printf("\n\t Soy la primera vocal...");
    }else if(letra=='e'){
        printf("\n\t Soy la segunda vocal...");
    }else if(letra=='i'){
        printf("\n\t Soy la tercera vocal...");
    }else if(letra=='o'){
        printf("\n\t Soy la cuarta vocal...");
    }else if(letra=='u'){
        printf("\n\t Soy la quinta vocal...");
    }else{
        printf("\n\t No soy ninguna vocal minuscula...");
    }

    printf("\n\n");
    return 0;

}