/*Método de ordenamiento burbuja
  Intercambiar los valores de dos números enteros introducidos por teclado
*/

#include <stdio.h>

int main()
{
    int x, y, aux;

    printf("Ingrese el valor de x: ");
    scanf ("%i", &x);

    printf("Ingrese el valor de y: ");
    scanf ("%i", &y);

    aux = x;
    x = y;
    y = aux;

    printf ("El valor de x es: %i\n", x);
    printf ("El valor de y es: %i\n", y);

    return 0;
}
