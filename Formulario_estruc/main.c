//Crear un formulario de registros
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nombre[50], empleo[50];
    int edad
}registro;

int main(){
    registro formulario1, formulario2;

    printf("Llenaremos es formulario 1:\n\n ");
    printf("Introduce tu nombre: " );
    fgets(formulario1.nombre, 50, stdin);

    printf("Introduce tu empleo: " );
    fflush(stdin);
    fgets(formulario1.empleo, 50, stdin);

    printf("Introduce tu edad: " );
    scanf("%i", &formulario1.edad);

    printf("Llenaremos es formulario 2\n\n: ");
    fflush(stdin);
    printf("Introduce tu nombre: " );
    fgets(formulario2.nombre, 50, stdin);

    printf("Introduce tu empleo: " );
    fflush(stdin);
    fgets(formulario2.empleo, 50, stdin);

    printf("Introduce tu edad: " );
    scanf("%i", &formulario2.edad);

    printf("Los nombres son: %s y %s ", formulario1.nombre, formulario2.nombre );
    printf("sus empleo son: %s y %s respectivamente", formulario1.empleo, formulario2.empleo );
    printf("con edades de: %i y %i respectivamente", formulario1.edad, formulario2.edad );
    return 0;
}
