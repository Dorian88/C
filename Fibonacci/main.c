//Programa que calcula la serie de Fibonacci

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0, num2 = 1, con = 3, fib, n;

    printf("Ingrese el numero de terminos que quieres ver en la sucesion de Fibonacci: ");
    scanf("%i", &n);

    if (n == 1){
        printf("%i ", num1);
    }else{
        printf("%i %i ", num1, num2);
    }

    while(con <= n){
        fib = num1 + num2;
        printf("%i ", fib);
        num1 = num2;
        num2 = fib;
        con++;
    }
    return 0;
}
