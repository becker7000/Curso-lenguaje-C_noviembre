#include<stdio.h>

int main(){

    char saludo[]="hola a todos desde aqui";
    int i,j;

    for(i=0;i<23;i++){
        printf("\n");
        for(j=0;j<i;j++)
            printf(" ");
        printf("%c",saludo[i]-32);
    }

    printf("\n\n");
    return 0;
}