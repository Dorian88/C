//Cambiar una letra de un String
#include <stdio.h>
#include <stdlib.h>

void cambiar (char v1[]);

int main()
{
    printf("Cambiar en una frase la letra a por un espacio.\n\n");

    char frase[] = "No solo se ha convertido en titular sino que aporta fantasia a nuestro juego.";

    printf("La frase es: %s\n\n", frase);

    cambiar(frase);
    printf("El resultado es: %s", frase);

    return 0;
}

void cambiar (char v1[]){
    int lim, i;

    lim = strlen(v1);

    for (i = 0; i < lim; i++){
        if(v1[i] == 'a'){
            v1[i] = ' ';
        }
    }
}
