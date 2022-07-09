#include<stdio.h>
#define CONVERSOR_KELVIN 273.15

int main(){

    double celsius, kelvin;

    printf("\n\t Inserta los \xF8 C : ");
    scanf("%lf",&celsius);
 
    kelvin = celsius+CONVERSOR_KELVIN;

    printf("\n\t Los grados %lf \xF8 C equivalen a %.2lf K",celsius,kelvin);
    

    printf("\n\n");
    return 0;
}