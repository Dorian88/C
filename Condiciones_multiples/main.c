// Programa para averiguar si un número ingresado por teclado esta entre 1 y 10
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%i", &num);

    if(num >= 1 && num <= 10){
        printf("El numero %i esta entre 1 y 10.\n", num);
    }else{
        printf("El numero %i NO esta entre 1 y 10.\n", num);
    }

    printf("-----EJERCICIO-----\n");
    /*Escriba un programa que acepte tres numero, hora, minuto y segundo y devuelva
      la hora que será dentro de un segundo, controlando que sea una hora correcta*/

    int hora, minuto, segundo;
    printf("Ingrese un valor para horas: ");
    scanf("%i", &hora);
    printf("Ingrese un valor para minutos: ");
    scanf("%i", &minuto);
    printf("Ingrese un valor para segundos: ");
    scanf("%i", &segundo);

    if (hora <= 23 && minuto <= 59 && segundo <= 59){
        segundo++;
        if(segundo == 60){
            minuto++;
            segundo = 0;
        }
        if(minuto == 60){
            hora++;
            minuto = 0;
        }
        if(hora == 24){
            hora = 0;
        }
        printf("La hora es: %i:%i:%i:\n", hora, minuto, segundo);
    }else{
        printf("La hora introducida es incorrecta\n");
    }
    return 0;
}
