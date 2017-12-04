/*1. Usando Punteros
  2. Intercambia los valores de dos variables con una función*/
#include <stdio.h>
#include <stdlib.h>

void cambio(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}
int main(){
    int x, *y;

    x = 4;
    y = &x;

    printf("El valor de *y es %i.\n\n", *y);

    int num1 = 5, num2 = 10;

    cambio(&num1, &num2);

    printf("El valor de num1 es %i y el valor de num2 es %i.\n\n", num1, num2);
    return 0;
}
