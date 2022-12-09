#include<stdio.h>

int main(){

    char letra;
    printf("\n\t Dame una letra: ");
    scanf("%c",&letra);

    if(letra=='a' || letra=='A'){
        printf("\n\t Soy la primera vocal...");
    }else if(letra=='e' || letra=='E'){
        printf("\n\t Soy la segunda vocal...");
    }else if(letra=='i' || letra=='I'){
        printf("\n\t Soy la tercera vocal...");
    }else if(letra=='o' || letra=='O'){
        printf("\n\t Soy la cuarta vocal...");
    }else if(letra=='u' || letra=='U'){
        printf("\n\t Soy la quinta vocal...");
    }else{
        printf("\n\t No soy ninguna vocal...");
    }

    printf("\n\n");
    return 0;

}