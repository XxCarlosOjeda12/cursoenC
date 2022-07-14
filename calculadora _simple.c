#include<stdio.h>

int main(){                        //Hice una calculadora simple de enteros

int opcion, x, y, suma, resta, multiplicacion , division;

    printf("\n\t +-----------------------------------+");
    printf("\n\t | Selecciona una opci\xA2n del men\xA3:   |");
    printf("\n\t | 1) Sumar                          |");
    printf("\n\t | 2) Restar                         |");
    printf("\n\t | 3) Multiplicar                    |");
    printf("\n\t | 4) Dividir                        |");
    printf("\n\t | 5) Salir                          |");
    printf("\n\t +-----------------------------------+");
    printf("\n\t Opci\xA2n : ");
    scanf("%d",&opcion);

    if( opcion<1 || opcion>5){
        printf("\n\t Opci\xA2n no valida");
        printf("\n\t Insertar una opci\xA2n ...");
        system("pause"); // Ponemos una pausa para que de click...
        system("cls"); // Limpiamos la pantalla
        return main(); // Reinciamos el programa con esta sentencia...
    }

    switch (opcion){
    case 1:

    printf("\n\t Dame un n\xA3mero para sumar: ");
    scanf("%d",&x);

    printf("\n\t Dame otro n\xA3mero para sumar:");
    scanf("%d",&y);

    suma=x+y;
    printf("\n\t La suma de %d con %d es = %d",x, y, suma);
    printf("\n\n");
    system("pause"); // Ponemos una pausa para que de click...
    system("cls"); // Limpiamos la pantalla
    return main();
    break;
   
    case 2: 
    
    printf("\n\t Dame un n\xA3mero para restar: ");
    scanf("%d",&x);

    printf("\n\t Dame otro n\xA3mero para restar:");
    scanf("%d",&y);

    resta=x-y;
    printf("\n\t La resta de %d con %d es = %d",x, y, resta);
    printf("\n\n");
    system("pause"); // Ponemos una pausa para que de click...
    system("cls"); // Limpiamos la pantalla
    return main();
    break;

    case 3:

    printf("\n\t Dame un n\xA3mero para multiplicar: ");
    scanf("%d",&x);

    printf("\n\t Dame otro n\xA3mero para multiplicar:");
    scanf("%d",&y);

    multiplicacion=x*y;
    printf("\n\t La multiplicaci\xA2n de %d con %d es = %d",x, y, multiplicacion);
    printf("\n\n");
    system("pause"); // Ponemos una pausa para que de click...
    system("cls"); // Limpiamos la pantalla
    return main();
    break;
   
    case 4: 
    
    printf("\n\t Dame un n\xA3mero para dividir: ");
    scanf("%d",&x);

    printf("\n\t Dame otro n\xA3mero para dividir:");
    scanf("%d",&y);

    division=x/y;
    printf("\n\t La divisi\xA2n de %d con %d es = %d",x, y, division);
    printf("\n\n");
    system("pause"); // Ponemos una pausa para que de click...
    system("cls"); // Limpiamos la pantalla
    return main();
    break;

    case 5:

    printf("\n\t Saliendo del men\xA3...");
    Sleep(5000); // Se duerme el sistema 3 segundos...
    printf("\n\n");
    system("cls");
    exit(0); // Termina el programa...    
        // El break en el default no es necesario
    }

    printf("\n\n\t ");
    system("pause");
    system("cls");
    return 0;
}