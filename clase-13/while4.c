#include<stdio.h>

int main(){

    int max;
    printf("\n\t Cuantos terminos? ");
    scanf("%d",&max); 

    int i=0;
    printf("\n\t Sucesion: ");
    while(i<max){
        printf(" %d",(2*i+1)); 
        i++;
    }

    printf("\n\n");
    return 0;
}