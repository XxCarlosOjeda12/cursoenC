#include<stdio.h>


int main(){

float voltaje, resistencia, corriente;


    // V representa volts
    printf("\n\t Inserta el voltaje (V):  ");
    scanf("%f",&voltaje);
  
    printf("\n\t Inserta la resistencia (Ohms) ");
    scanf("%f",&resistencia);

    // A representa Ampers
    corriente = voltaje/resistencia;
    printf("\n\t La intensidad de corriente es de :%.4f (A)",corriente);


    printf("\n\n");
    return 0;
} 
