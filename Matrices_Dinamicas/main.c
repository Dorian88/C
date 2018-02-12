// Realizar un programa que copie el contenido de una matriz en otra de manera dinamica.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz1, **matriz2, n, m, i, j;

    printf("Introduce el numero de filas: ");
    scanf("%i", &n);
    printf("Introduce el numero de columnas: ");
    scanf("%i", &m);

    matriz1 = (int**)malloc((n*sizeof(int*)));
    if(matriz1 == NULL){
        printf("No se ha podido reservar el espacio de memoria \n");
        exit(1);
    }

    for(i = 0; i < n; i++){
        matriz1[i] = (int*)malloc((m*sizeof(int)));
        if(matriz1[i] == NULL){
            printf("No se ha podido reservar el espacio de memoria \n");
            exit(1);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%i", &matriz1[i][j]);
        }
    }

    matriz2 = (int**)malloc((n*sizeof(int*)));
    if(matriz1 == NULL){
        printf("No se ha podido reservar el espacio de memoria \n");
        exit(1);
    }

    for(i = 0; i < n; i++){
        matriz2[i] = (int*)malloc((m*sizeof(int)));
        if(matriz2[i] == NULL){
            printf("No se ha podido reservar el espacio de memoria \n");
            exit(1);
        }
    }

    printf("\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            matriz2[i][j] = matriz1[i][j];
            printf("%i\t", matriz2[i][j]);
        }
        printf("\n");
    }

    free(matriz1);
    free(matriz2);

    return 0;
}
