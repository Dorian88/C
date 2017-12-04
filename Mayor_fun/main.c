//Programa para encontrar el maximo entre dos numeros mediante funciones

#include <stdio.h>
#include <stdlib.h>

int maximo();

int main(){
    int x, y, max;

    x = 3;
    y = 10;

    max = maximo(x, y);

    printf("El valor maximo es: %i \n", max);

    return 0;
}

int maximo(int a, int b){
    int aux;

    if (a > b){
        aux = a;
    }else{
        aux = b;
    }
    return aux;
}
