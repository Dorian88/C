// Comprobar que dos matrices dinamicas son iguales con una funcion

#include <stdio.h>
#include <stdlib.h>

int reserevarMemoria(int filas, int colum);
void introduce (int filas, int colum, int **mat);
void comparar(int filas, int colum, int **mat1, int **mat2);

int main(){
    int **matriz1, **matriz2, n, m;

    printf("Introduce el numero de filas: ");
    scanf("%i", &n);
    printf("Introduce el numero de columnas: ");
    scanf("%i", &m);

    matriz1 = reserevarMemoria(n, m);
    matriz2 = reserevarMemoria(n, m);

    introduce (n, m, matriz1);
    introduce (n, m, matriz2);

    comparar(n, m, matriz1, matriz2);
    return 0;
}

int reserevarMemoria(int filas, int colum){
    int **mat, i;

    mat = (int**)malloc((filas*sizeof(int*)));
    if(mat == NULL){
        printf("No se ha podido reservar el espacio de memoria \n");
        exit(1);
    }

    for(i = 0; i < filas; i++){
        mat[i] = (int*)malloc((colum*sizeof(int)));
        if(mat[i] == NULL){
            printf("No se ha podido reservar el espacio de memoria \n");
            exit(1);
        }
    }
    return mat;
}

void introduce (int filas, int colum, int **mat){
    int i, j;
    for(i = 0; i < filas; i++){
        for(j = 0; j < colum; j++){
            printf("Introduce el valor para el elemento [%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }
}

void comparar(int filas, int colum, int **mat1, int **mat2){
    int i, j, aux = 0;
    for(i = 0; i < filas && aux == 0; i++){
        for(j = 0; j < colum && aux == 0; j++){
            if (mat1[i][j] != mat2[i][j]){
                aux = 1;
            }
        }
    }

    if (aux == 0){
        printf("Las dos matrices son iguales.\n");
    }else{
        printf("Las dos matrices NO son iguales.\n");
    }
}
