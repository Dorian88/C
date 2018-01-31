//Programa para almacenar las notas de un alumno de las asignaturas de un semestre
#include <stdio.h>

typedef struct{
    int matematicas, ingles, fisica;
}notas;

void darNota(notas *nota);

int main(){
    notas not;

    darNota(&not);

    printf("\nLa nota de matematicas es: %i \n", not.matematicas);
    printf("La nota de ingles es: %i \n", not.ingles);
    printf("La nota de fisica es: %i \n", not.fisica);

    return 0;
}

void darNota(notas *nota){
    printf("Introduzca la nota de matematicas: ");
    scanf("%i", &nota->matematicas);

    printf("Introduzca la nota de ingles: ");
    scanf("%i", &nota->ingles);

    printf("Introduzca la nota de fisica: ");
    scanf("%i", &nota->fisica);

    printf("\nLa nota de matematicas es: %i \n", (*nota).matematicas); //Accediendo a la informacion con punto
    printf("La nota de ingles es: %i \n", nota->ingles); //Accediendo a la informacion con flecha
    printf("La nota de fisica es: %i \n", nota->fisica);
}
