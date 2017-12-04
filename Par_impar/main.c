// Realizar un programa para ver si un numero es par o impar

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Numero ingresado sin teclado\n");
    int x = 6, y, z, mod;

    y = x % 2;
    if (y == 0){
        printf("El numero %i es par\n", x);
    }else{
        printf("El numero %i es impar\n", x);
    }

    printf("\nNumero ingresado por teclado\n");
    printf("Ingrese cualquier numero entero: ");
    scanf("%i", &z);

    mod = z % 2;
    if (mod == 0){
        printf("El numero %i es par", z);
    }else{
        printf("El numero %i es impar", z);
    }
    return 0;
}
