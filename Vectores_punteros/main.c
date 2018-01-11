//Vectores con punteros
#include <stdio.h>

void insertar (int *vec);
void imprimir (int *vec);
void probabilidad (int *vec1);
void leer (int *vec1);

int main(){
    printf("Ejemplo 1: Ingresar datos a un array usando punteros\n\n");

    int vect [3];

    insertar (vect);
    printf("\nLos datos del vector son:\n");
    imprimir (vect);

    printf("\n\nEjemplo 2: Calcular la probabilidad de cada uno de los numeros de un dado con un vector usando punteros");
    printf(" con 10000 iteraciones.\n\n");

    int vect1 [] = {0, 0, 0, 0, 0, 0};

    probabilidad(vect1);
    printf("\nLas probabilidades son:\n");
    leer(vect1);

    return 0;
}

void insertar (int *vec){
    int i;

    for (i = 0; i < 3; i++){
        printf("Ingrese un valor para la posicion %i: ", i+1);
        scanf("%i", (vec+i));
    }
}

void imprimir (int *vec){
    int i;

    for (i = 0; i < 3; i++){
        printf("%i ", *(vec+i));
    }
}

void probabilidad (int *vec1){
    srand(time(NULL));
    int i, aux;

    for (i = 0; i < 10000; i++){
        aux = rand()%6;

        switch (aux){
            case 0: {
                *(vec1 + aux) += 1;
                break;
            }

            case 1: {
                *(vec1 + aux) += 1;
                break;
            }

            case 2: {
                *(vec1 + aux) += 1;
                break;
            }

            case 3: {
                *(vec1 + aux) += 1;
                break;
            }

            case 4: {
                *(vec1 + aux) += 1;
                break;
            }

            case 5: {
                *(vec1 + aux) += 1;
                break;
            }
        }
    }
}

void leer (int *vec1){
    int i;
    float prob;

    for (i = 0; i < 6; i++){
        prob = (*(vec1+i)*100)/10000.;
        printf("Para el numero %i es de: %f\n", i+1, prob);
    }
}
