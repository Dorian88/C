//Manejo de variables

#include <stdio.h>

int main(){
    //Declaración de variables
    int x;
    float y;
    double z;
    char x1;

    //Inicialización de variables
    x = 5;
    y = 10.5;
    z = 20.9;
    x1 = 'a';

    //Mostrar la información en consola.
    printf("El valor de x: %i. ", x); printf("Es de tipo entero\n");
    printf("El valor de x: %f. ", y); printf("Es de tipo flotante\n");
    printf("El valor de z: %f. ", z); printf("Es de tipo doble\n");
    printf("El valor de x1: %c. ", x1); printf("Es de tipo caracter\n");

    return 0;
}
