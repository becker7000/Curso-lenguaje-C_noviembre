#include<stdio.h>

int main(){

    // 1,5,3,7,5,9,7,11,...
    int natural=1;

    while(natural<=100){
        if(natural%2==1) //Impar
            printf(" %d",natural);
        else // Par
            printf(" %d",natural+3);
        natural++; // Paso 1        
    }

    printf("\n\n");
    return 0;
}