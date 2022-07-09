#include<stdio.h>
#define CONVERSOR_KILOMETRO 1.609;

int main(){

double millas, kilometros;

    printf("\n\t Inserta las millas (mi): ");
    scanf("%lf",&millas);

    kilometros=millas*CONVERSOR_KILOMETRO;

    printf("\n\t Las millas %.2lf (mi) equivalen a %.3lf (km)",millas,kilometros);

    printf("\n\n");
    return 0;
}