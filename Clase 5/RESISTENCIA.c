#include<stdio.h>


int main(){

float corriente, voltaje, resistencia;

    // V representa volts
    printf("\n\t Inserta el voltaje (V):  ");
    scanf("%f",&voltaje);

    // A representa Ampers 
    printf("\n\t Inserta la intensidad de corriente (A) ");
    scanf("%f",&corriente);

    resistencia = voltaje/corriente;

    printf("\n\t La resistencia es de :%.4f (Ohms)",resistencia);


    printf("\n\n");
    return 0;
} 
