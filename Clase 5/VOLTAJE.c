#include<stdio.h>


int main(){

float corriente, resistencia, voltaje;

    // A representa Ampers  
    printf("\n\t Inserta la corriente (A):  ");
    scanf("%f",&corriente);

    
    printf("\n\t Inserta la resistencia (Ohms) ");
    scanf("%f",&resistencia);

    voltaje = corriente*resistencia;

    // V representa volts
    printf("\n\t El voltaje es de :%.4f (V)",voltaje);


    printf("\n\n");
    return 0;
} 
