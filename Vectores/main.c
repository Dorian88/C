/*1. Uso de vectores
  2. Darle valor a un vector de 10 valores y leerlos despues.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vect[10], j, k, vector [] = {3, 5, 8, 13, 21}, i;

    printf("El valor de la posicion 0 es %i.\n\n", vector[0]);

    for (i = 0; i < 5; i++){
        printf("El valor de la posicion %i es %i.\n\n", i, vector[i]);
    }

    printf("Ingresar valores al vector\n\n");

    for (j = 0; j < 10; j++){
        //printf("En la posicion %i", j);
        scanf("%i ", &vect[j]);
    }

    for (k = 0; k < 10; k++){
        printf("El valor de la posicion %i es %i: ", k, vect[k]);
    }
    return 0;
}
