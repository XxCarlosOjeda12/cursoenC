#include<stdio.h>

int main(){

    // Imprimir 'á' con secuencia de escape:   
    printf("\n\t 1) \xa0 ");

    // Imprimir '@' con secuencia de escape:    utilice mi correo usando el @ con secuencia de escape
    printf("\n\t 2) carloswindow123\x40gmail.com ");

    // Imprimir '&' con secuencia de escape:
    printf("\n\t 3) drake\x26josh ");

    // Imprimir 'ñ' con secuencia de escape:
    printf("\n\t 4) feliz cumplea\xa4os ");

    // Imprimir '¿' con secuencia de escape:
    printf("\n\t 5) \xa8 como est\xa0s? ");

    printf("\n");
    return 0;
}