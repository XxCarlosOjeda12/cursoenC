#include<stdio.h>

int main(){

    int x, y;

    printf("\n\t Dame un numero: ");
    scanf("%d",&x);

    printf("\n\t Dame otro numero: ");
    scanf("%d",&y);

    if((x>=y)){
    printf("\n\t %d es mayor o igual que %d",x,y);
    }

    if((x<=y)){
    printf("\n\t %d es menor o igual que %d",x,y);
    }
    
    printf("\n\n");
    return 0;
}