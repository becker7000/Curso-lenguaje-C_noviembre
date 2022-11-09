#include<stdio.h>

int main(){

    // Nota: normalmente las sumas acumuladas inician en 0.
    int ahorro=0;

    ahorro+=100; // 100  ahorro = ahorro + 100;
    ahorro+=200; // 300
    ahorro+=150; // 450
    ahorro+=250; // 700
    ahorro*=2;   // 1400

    printf("\n\t El total ahorrado es: $%d",ahorro);

    printf("\n\n");
    return 0;
}