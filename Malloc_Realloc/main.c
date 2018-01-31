/*Realizar un vector dinamico de 10 elementos aleatorios comprendidos entre 0 y 2 y eliminar
 *todos los numeros repetidos reajustando el vector
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(int *vector, int n);

int main(){

    int m = 10, *vect, i, j, k;

    vect = (int*)malloc(m*sizeof(int)); //Asigna un tamaño al vector
    if(vect == NULL){
        printf("No se ha podido reservar espacio de memoria.\n");
    }else{
        aleatorio(vect, m);

        for(i=0; i < m; i++){
            for(j = i+1; j < m; j++){
                if(*(vect+i) == *(vect+j)){
                    for(k = j; k+1 < m; k++){
                        *(vect+k) = *(vect+k+1);
                    }
                    m--;
                }
            }
        }
        vect = (int*)realloc(vect,m*sizeof(int)); //Redimensiona el vector conservando sus valores
        if(vect == NULL){
            printf("No se ha podido reservar espacio de memoria.\n");
        }else{
            for(i=0; i < m; i++){
                printf("%i ", *(vect+i));
            }
            printf("\n");
        }
    }

    return 0;
}

void aleatorio(int *vector, int n){
    int i;
    srand(time(NULL));

    for(i=0; i<n; i++){
        *(vector+i) = rand()%3;
        printf("%i ", *(vector+i));
    }
    printf("\n");
}
