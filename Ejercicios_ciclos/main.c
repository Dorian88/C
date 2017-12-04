// 1. Realiza un programa que imprima la suma de los números pares entre dos y mil.
// 2. Realiza un programa que calcule el promedio de n números introducidos por teclado.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Resolviendo el ejercicio 1.
    int i, n, m;
    double suma = 0, prom = 0;

    for (i = 2; i <= 1000; i+=2){
        suma = suma + i;
    }

    printf("El resultado de la suma es: %f\n", suma);

    //Resolviendo el ejercicio 2.
    i = 1;
    suma = 0;
    printf("Ingrese la cantidad de numeros de la que quieres calcular el promedio: ");
    scanf("%i", &n);

    while(i <= n){
        printf("Introduce el numero %i: ", i);
        scanf("%i", &m);
        suma = suma + m;
        i++;
    }

    prom = suma/n;
    printf("El promedio es %f\n", prom);

    return 0;
}
