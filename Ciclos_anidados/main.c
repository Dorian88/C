//Hacer las tablas de multiplicar del 1 al 9

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, mul;

    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 10; j++){
            mul = i * j;
            printf("%i x %i = %i.\n", i, j, mul);
        }
        printf("\n");
    }
    return 0;
}
