//Declaracion de variables y asignacion de valores
#include <stdio.h>

int main()
{
    int x; //Un número entero.
    float y; //Es ideal para los números decimales.
    double w; //Es un flotante con muchos decimales
    char z; //Es una letra o números que se pueden usar como una letra

    x = 5;
    y = 10.5;
    w = 20.9;
    z = 'a';

    printf("El valor de x es: %i\n", x);
    printf("El valor de y es: %f\n", y);
    printf("El valor de w es: %f\n", w);
    printf("El valor de z es: %c\n", z);
    return 0;
}
