//Memoria dinamica
#include <stdio.h>
#include <stdlib.h>

int main(){
    //Memoria Estatica

    printf("----------Memoria Estatica----------\n");

    int i, N = 50, vector[N];

    for(i = 0; i < N; i++){
        vector[i] = i;
    }

    for(i = 0; i < N; i++){
        printf("%i, ", vector[i]);
    }

    printf("\n\n----------Memoria Pseudoestatica----------\n");

    //Memoria Pseudpestatica

    int j, M;

    printf("Ingrese un numero para M: ");
    scanf("%i", &M);

    int vector1[N];

    for(j = 0; j < M; j++){
        vector1[j] = j;
    }

    for(j = 0; j < M; j++){
        printf("%i, ", vector1[j]);
    }

    //Memoria Dinamica
    printf("\n\n----------Memoria Dinamica----------\n");

    int k, L, *vector2;

    printf("Ingrese un numero para L: ");
    scanf("%i", &L);

    vector2 = (int*)malloc(N*sizeof(int));

    if (vector2 == NULL){
        printf("No se ha podido reservar la memoria.\n");
    }else{
        for(k = 0; k < L; k++){
            *(vector2 + k) = k;
        }

        for(k = 0; k < L; k++){
            printf("%i, ", *(vector2 + k));
        }
    }

    return 0;
}
