//Manejo de matrices
#include <stdio.h>

void introduce (int mat[][5]);
void leerMatriz (int mat[][5]);
void ingresar (int m[][2]);
void compara (int m1[][2], int m2[][2]);

int main(){
    int matriz [5][5], m1 [2][2], m2 [2][2];

    printf("Ejemplo 1: Ingresar datos de forma aleatoria a una matriz y mostrarlo en pantalla\n\n");
    introduce (matriz);
    printf("La matriz es:\n");
    leerMatriz (matriz);

    printf("\nEjemplo 2: Comparar dos matrices\n\n");
    printf("Matriz 1:\n");
    ingresar (m1);
    printf("\nMatriz 2:\n");
    ingresar (m2);
    compara(m1, m2);
    return 0;
}

void introduce (int mat[][5]){
    int i, j;

    srand(time(NULL));

    for(i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            mat[i][j] = rand()%10;
        }
    }
}

void leerMatriz (int mat[][5]){
    int k, l;

    for(k = 0; k < 5; k++){
        for (l = 0; l < 5; l++){
            printf("%i ", mat[k][l]);
        }
        printf("\n");
    }
}

void ingresar (int mat[][2]){
    int m, n;
    for(m = 0; m < 2; m++){
        for (n = 0; n < 2; n++){
            printf("Valor[%i][%i]: ", m+1, n+1);
            scanf("%i", &mat[m][n]);
        }
    }
}

void compara (int m1[][2], int m2[][2]){
    int o, p, aux = 0;

    for(o = 0; o < 2 && aux == 0; o++){
        for(p = 0; p < 2 && aux == 0; p++){
            if (m1[o][p] != m2[o][p]){
                aux = 1;
            }
        }
    }

    if (aux == 0){
        printf("Las dos matrices son iguales.\n");
    }else{
        printf("Las dos matrices no son iguales.\n");
    }
}
