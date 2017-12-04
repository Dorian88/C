//Usando el if

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;

    printf("OPERADORES DE COMPARACION \n");
    printf("==: Igual que. \n <: Menor que. \n <=: Menor o igual que. \n >: Mayor que. \n >=: Mayor o igual que. \n");
    printf("!=: diferente. \n");

    if (x == 5){
        printf("\nEl valor de x es 5. \n");
    }

    if (x < 5){
        printf("\nEl valor de x es 5. \n");
    }else{
        printf("\nEl valor de x no es menor que 5. \n");
    }

    if (x <= 5){
        printf("\nEl valor de x menor o igual que 5. \n");
    }

    if (x > 5){
        printf("\nEl valor de x es 5. \n");
    }else{
        printf("\nEl valor de x no es mayor que 5. \n");
    }

    if (x >= 5){
        printf("\nEl valor de x es mayor o igual que 5. \n");
    }

    if (x != 5){
        printf("\nEl valor de x es 5. \n");
    }else{
        printf("\nEl valor de x no es diferente de 5. \n");
    }

    printf("\nEJERCICIO\n");
    printf("Declarar una variable entera e inicializarla con un valor entre 1 y 10");
    printf(" y por teclado ingresar un numero entero y averiguar si coincide con el valor ya inicializado \n\n");

    int y = 9, z;

    printf("Ingrese un valor entre 1 y 10 y averigua si acierta: ");
    scanf("%i", &z);

    if(z==y){
        printf("\nHas acertado!\n");
    }else{
        printf("\nLo siento has fallado. Intentalo de nuevo\n");
    }

    return 0;
}
