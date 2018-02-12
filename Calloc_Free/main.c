//Hacer un vector con 100 enteros que estan comprendidos entre 0 y 2 y contar con un vector dinamico aparece cada numero

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio (int vector[], int tam);

int main(){
    int vect[100], *cont, n = 3, i, j, op;

    cont = (int*) calloc(n, sizeof(int)); //Asignado de memoria al vector dinamicdo y se inicializa.

    if(cont == NULL){
        printf("No ha sido posible asignar espacio de memoria");
    }else{
        aleatorio(vect, 100);
        for(i = 0; i < 100; i++){
            op = vect[i];
            *(cont+op) += 1;
        }

        for(j = 0; j < n; j++){
            printf("%i ", *(cont+j));
        }
    }

    free(cont); //Libera la memoria la memoria que se ha usado de forma dinamica
    return 0;
}

void aleatorio(int vector[], int tam){
    int i;
    srand(time(NULL));

    for(i = 0; i < tam; i++){
        vector[i] = rand() % 3;
    }

    printf("\n");
}
