//Introducir elementos a un vector con una función

#include <stdio.h>

void fun (int a[]);
void imprimir (int b[]);
void ordenar (int c[]);
void imprimir1 (int d[]);

int main()
{
    int vec [2];
    int vec1 [10] = {4, 6, 8, 1 ,9, 0, 2, 5, 3, 7};

    printf("Ejemplo 1: Ingresar elementos en un vector y mostrarlos en pantalla\n\n");

    fun(vec);
    printf("\n");
    imprimir(vec);

    printf("\nEjemplo 2: Ordenar los elementos de un vector de menor a mayor\n\n");

    printf("El vector original es:\n");
    imprimir1(vec1);
    ordenar (vec1);
    printf("El vector ordenado es:\n");
    imprimir1(vec1);
    return 0;
}

void fun (int a[]){
    int i;

    printf("Introduce numeros para el vector: \n");

    for(i = 0; i < 2; i++){
        scanf("%i", &a[i]);
    }
}

void imprimir(int b[]){
    int i;

    printf("Los datos del vector son: \n");

    for(i = 0; i < 2; i++){
        printf("El numero de la posicion %i es: %i", i, b[i]);
        printf("\n");
    }
}

void ordenar (int c[]){
    int i, j, aux;

    for(i = 0; i < 10; i++){
        for(j = i; j < 10; j++){
            if(c[i] > c[j]){
                aux = c[i];
                c[i] = c[j];
                c[j] = aux;
            }
        }
    }
}

void imprimir1(int d[]){
    int i;

    for(i = 0; i < 10; i++){
        printf("%i\t", d[i]);
    }
}
