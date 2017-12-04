//Programa que muestra los números primoa del 1 al 2000

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, aux;

    for(i = 0; i < 2000; i++){
        k = 0;
        for(j=2; j<i && k != 1; j++){
            aux = i % j;
            if(aux == 0){
                k = 1;
            }
        }
        if (k != 1){
            printf("%i ", i);
        }
    }
    return 0;
}
