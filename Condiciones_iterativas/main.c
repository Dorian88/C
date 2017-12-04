//Escribe un programa que lea dos enteros y muestre por pantalla todos los números comprendidos entre esos números dados

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int /*num1, num2, i;*/
    char car;

    /*printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero (Debe ser mayor al anterior): ");
    scanf("%i", &num2);

    printf("\n-----Usando el ciclo for-----\n\n");
    printf("Los numeros que estan entre %i y %i son: ", num1, num2);

    for(i = (num1+1); i < num2; i++){
        printf("%i ", i);
    }

    printf("\n\n-----Usando el ciclo while-----\n\n");
    printf("Los numeros que estan entre %i y %i son: ", num1, num2);

    i = num1 + 1;

    while(i < num2){
        printf("%i ", i);
        i++;
    }*/

    printf("\n\n-----Usando el ciclo do while-----\n\n");

    //i = 10;

    /*do{
        printf("Esta instruccion se ejecutara al menos una vez");
    }while(i < 5);*/

    //Hacer un ciclo que nos pregunte si queremos continuar y hacerlos hasta que se escriba la letra s.

    do{
        printf("Intruduce una letra: ");
        fflush(stdin); //Sirve para limpiar el buffer;
        scanf("%c", &car);
    }while(car != 's' && car != 'S');

    return 0;
}
