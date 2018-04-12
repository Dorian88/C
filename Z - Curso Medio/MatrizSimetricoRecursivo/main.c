//Programa que comprueba si una matriz es simetrica o no
#include <stdio.h>
#include <stdlib.h>

#define N 5

int fun(int mat[N][N]);
int fun_final(int mat[N][N], int i, int j);

int main(){
    int resultado;

    int mat[N][N] = {
        {1, 2, 3, 4, 5},
        {2, 1, 2, 3, 4},
        {3, 2, 1, 2, 3},
        {4, 3, 2, 1, 2},
        {5, 4, 3, 2, 1}
    };

    resultado = fun(mat); //Devolvera 1 si la matriz es simetrica y 0 si no lo es

    if(resultado){
        printf("La matriz es simetrica.\n");
    }else{
        printf("La matriz no es simetrica.\n");
    }

    return 0;
}

int fun(int mat[N][N]){
    return fun_final(mat, 0, 1);
}

int fun_final(int mat[N][N], int i, int j){
    if(i== N-1){
        return 1;
    }else{
        if (mat[i][j]!=mat[j][i]){
            return 0;
        }else{
            if(j==N-1){
                return fun_final(mat, i+1, i+2);
            }else{
                return fun_final(mat, i, j+1);
            }
        }
    }
}
