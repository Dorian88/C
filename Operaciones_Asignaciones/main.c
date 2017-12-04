//Macros asignaciones y operaciones

#include <stdio.h>
#include <math.h>

#define PI 3.1416 //Esto es una macro, es como una constante

int main()
{
    float x;
    int y;

    x = PI;

    printf("Introduce un valor: ");
    scanf("%i", &y);

    x = x * y;

    printf("El valor de x es: %f \n\n ", x);

    printf("----------AMPLIACION DE CONOCIMIENTOS----------\n\n");

    int a, b;

    a = 10;
    b = 2;

    printf("OPERACIONES BASICAS \n");
    a = a + b; //Suma Otra forma de asignación es a+=b
    printf("El valor de a = a + b es: %i \n ", a);

    a = a - b; //Resta Otra forma de asignación es a-=b
    printf("El valor de a = a - b es: %i \n ", a);

    a = a * b; //Multiplicación Otra forma de asignación es a*=b
    printf("El valor de a = a * b es: %i \n ", a);

    a = a / b; //División Otra forma de asignación es a/=b
    printf("El valor de a = a / b es: %i \n ", a);

    a = a % b; //Módulo
    printf("El valor de a = a % b es: %i \n\n ", a);

    printf("OTRAS OPERACIONES \n");

    a = 10;
    a = pow(b, a); //Potencia
    printf("El valor de b a la a es: %i \n ", a);

    a = sqrt(a); //Raiz Cuadrada
    printf("El valor de la raiz cuadrada de a es: %i \n\n ", a);

    printf("OPERADORES DE INCREMENTO \n");

    b++; //Incrementa en uno
    printf("El valor de b++ (Incrementa en uno) es: %i \n ", b);

    a--;
    printf("El valor de a-- (Decrementa en uno) es: %i \n ", a);


    return 0;
}
