//Manejo de estructuras
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int paginas;
    char nombre[50];
    float precio;

}libro;

int main(){
    libro GOT[10], cr, GOT1;
    int i, inc = 0;

    for(i=0; i<10; i++){
        GOT[i].precio = 65000 + inc;
        inc += 5000;
        printf("El precio del libro %i es de %f pesos.\n", i+1, GOT[i].precio);
    }

    /*GOT1.paginas = 879;
    strcpy(GOT1.nombre, "Game of Thrones");
    GOT1.precio = 65000;
    cr.paginas = 900;
    strcpy(cr.nombre, "Choque de reyes");
    cr.precio = 70000;

    printf("El nombre del primer libro de la saga es: %s. ", GOT1.nombre);
    printf("Con %i paginas. ", GOT1.paginas);
    printf("Tiene un precio de %f pesos.\n\n", GOT1.precio);
    printf("El nombre del segundo libro de la saga es: %s. ", cr.nombre);
    printf("Con %i paginas. ", cr.paginas);
    printf("Tiene un precio de %f pesos.\n", cr.precio);*/
    return 0;
}
