#include<stdio.h>

int main(){

    int x, y;

    printf("\n\t Dame un numero: ");
    scanf("%d",&x);

    printf("\n\t Dame otro numero: ");
    scanf("%d",&y);

    if(x<y){
    printf("\n\t  El mayor es %d",y);
    }

    if(x>y){
    printf("\n\t  El mayor es %d",x);
    }
    
    if(x==y){
    printf("\n\t  Los numeros son iguales");
    }


    printf("\n\n");
    return 0;
}