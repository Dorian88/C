//Calcular el factorial de dos numero usando funciones

#include <stdio.h>
#include <stdlib.h>

int factorial(int a);

void factorialv(){
    int x, i, aux = 1;

    printf("Introduce el un numero para calcular su factorial: ");
    scanf("%i", &x);

    for (i = 1; i <= x; i++){
        aux = aux * i;
    }

    printf("El factorial del numero %i es: %i.\n", x, aux);
}

int main(){
    int x, y, fac1, fac2;

    printf("Introduce el primer numero para calcular su factorial: ");
    scanf("%i", &x);

    printf("Introduce el segundo numero para calcular su factorial: ");
    scanf("%i", &y);

    fac1 = factorial(x);
    fac2 = factorial(y);

    printf("El factorial de los numeros %i y %i son: %i y %i respectivamente.\n", x, y, fac1, fac2);

    printf("\nCon una funcion tipo void\n");
    factorialv();

    return 0;
}

int factorial(int a){
    int i, aux = 1;
    for (i = 1; i <= a; i++){
        aux = aux * i;
    }

    return aux;
}
