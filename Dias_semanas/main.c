//Haga un programa que lea un numero entre 1 y 7 y devuelva el dia de la semana correspondiente
//Para 1 lunes, 2 martes, etc.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Introduce un numero entre 1 y 7: ");
    scanf("%i", &x);

    printf("Usando if/else anidada.\n");
    if (x == 1){
        printf("Lunes.\n");
    }else if (x == 2){
        printf("Martes.\n");
    }else if (x == 3){
        printf("Miercoles.\n");
    }else if (x == 4){
        printf("Jueves.\n");
    }else if (x == 5){
        printf("Viernes.\n");
    }else if (x == 6){
        printf("Sabado.\n");
    }else if (x == 7){
        printf("Domingo.\n");
    }else{
        printf("El numero ingresado no es correcto.\n\n");
    }

    printf("\n");
    printf("Usando Switch.\n");
    switch(x){
        case 1: printf("Lunes.\n");
                break;
        case 2: printf("Martes.\n");
                break;
        case 3: printf("Miercoles.\n");
                break;
        case 4: printf("Jueves.\n");
                break;
        case 5: printf("Viernes.\n");
                break;
        case 6: printf("Sabado.\n");
                break;
        case 7: printf("Domingo.\n");
                break;
        default: printf("El numero ingresado no es correcto.\n");
                break;
    }
    return 0;
}
