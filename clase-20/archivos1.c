#include<stdio.h>
#define ruta "ManiHacker.txt"

int main(){

    // FILE es un apuntador especial para archivos
    FILE* archivo;

    // La función fopen() abre un archivo:
    // Modos de apertura:
    
    // r -> sólo lectura
    // w -> sólo escrita
    // wt -> escritura y lectura

    archivo=fopen(ruta,"r");

    // NULL es un valor que puede tomar un apuntador 
    // cuando no apunta a nada...

    // Validando si el archivo existe:
    if(archivo==NULL){
        printf("\n\t Archivo no encontrado...");
    }else{
        printf("\n\n\t Archivo encontrado...\n");
        Sleep(3000); // Hacer que el sistema duerma 3 segundos
        printf("\n\t Leyendo archivo...");
        Sleep(2800);
        printf("\n\n\t Archivo: \n");
        char letra;
        int num_chars=0;
        while(letra!=EOF){ // End Of File
            letra=fgetc(archivo); // Leyendo caracter por caracter
            printf("%c",letra);
            num_chars++;
            if(num_chars%40==0){
                printf("\n");
            }
        }
        printf("\n\t El archivo tiene %d caracteres",num_chars);
    }

    printf("\n\n\t Fin del programa...");
    fclose(archivo); // Cerramos el archivo

    printf("\n\n");
    return 0;
}