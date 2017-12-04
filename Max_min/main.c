//Programa que ingresado tres numeros de como resultado cual es el mayor y el menor de todos

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("AVERIGUAR EL MAXIMO DE LOS TRES\n");

    int x, y, z, max, min;
    printf("Ingrese el numero para x: ");
    scanf("%i", &x);
    printf("Ingrese el numero para y: ");
    scanf("%i", &y);
    printf("Ingrese el numero para z: ");
    scanf("%i", &z);

    if(x > y){
        if(x > z){
            max = x;
        }else{
            max = z;
        }
    }else{
        if(y > z){
            max = y;
        }else{
            max = z;
        }
    }

    printf("El valor %i es el mayor de los tres\n\n", max);

    printf("AVERIGUAR EL MINIMO DE LOS TRES\n");

    if(x < y){
        if(x < z){
            min = x;
        }else{
            min = z;
        }
    }else{
        if(y < z){
            min = y;
        }else{
            min = z;
        }
    }

    printf("El valor %i es el minimo de los tres\n\n", min);

    return 0;
}
