//Programa que sirve para calcular el factorial de un número

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, fact = 1;

    printf("Ingrese un numero para calcular el factorial: ");
    scanf("%i", &x);

    for (i=1; i <=x; i++){
        fact = fact * i;
    }

    printf("El factorial %i es: %i\n", x, fact);
    return 0;
}
