//Hacer un programa que haga la suma de forma recursiva
#include <stdio.h>
#include <stdlib.h>

int suma(int num1, int num2);
int suma_im(int a, int b, int res);

int main(){
    int resultado;

    resultado = suma(8, 10);

    printf("El resultado de la suma es: %i.\n", resultado);

    return 0;
}

int suma(int num1, int num2){
    return suma_im(num1, num2, 0);
}

int suma_im(int a, int b, int res){
    if(a==0){
        return res + b;
    }else{
        suma_im(a - 1, b, res + 1);
    }
}
