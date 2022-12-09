#include<stdio.h>

int main(){

    char letra;
    printf("\n\t Dame una letra: ");
    scanf("%c",&letra);

    switch(letra){ // Selector: solo acepta tipo de dato char o int
        case 'a': case 'A':
            printf("\n\t Soy la primera vocal...");
            break;
        case 'e': case 'E':
            printf("\n\t Soy la segundo vocal...");
            break;
        case 'i': case 'I':
            printf("\n\t Soy la tercera vocal...");
            break;
        case 'o': case 'O':
            printf("\n\t Soy la cuarta vocal...");
            break;
        case 'u': case 'U':
            printf("\n\t Soy la quinta vocal...");
            break;
        default: // Opcional
            printf("\n\t No soy ninguna vocal...");
            break; // Opcional  
    }

    printf("\n\n");
    return 0;
}