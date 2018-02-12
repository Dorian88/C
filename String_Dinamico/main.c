//Crear una estructura que representa un libro y usando strings dinamicos.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *nombre;
    char *autor;
}libro;

void cambio (char aux [100]);

int main(){
    libro GOT;
    char temp [50];

    printf("Introduce un nombre para el libro: ");
    fgets(temp, 50, stdin);
    cambio(temp);

    GOT.nombre = (char*)malloc((strlen(temp)+1)*sizeof(char)); // Asignado el espacio de memoria
    if(GOT.nombre == NULL){
        printf("No se ha podido asignar el espacio en memoria");
        exit(1);
    }

    strcpy(GOT.nombre, temp);

    printf("Introduce el autor del libro: ");
    fflush(stdin);
    fgets(temp, 50, stdin);
    cambio(temp);

    GOT.autor = (char*)malloc((strlen(temp)+1)*sizeof(char)); // Asignado el espacio de memoria
    if(GOT.autor == NULL){
        printf("No se ha podido asignar el espacio en memoria");
        exit(1);
    }

    strcpy(GOT.autor, temp);

    printf("%s \n", GOT.nombre);
    printf("%s \n", GOT.autor);

    free(GOT.nombre);
    free(GOT.autor);

    return 0;
}

void cambio (char aux [50]){
    int i, temp = 0;

    for (i = 0; i < 100 && temp == 0; i++){
        if (aux[i] == '\n'){
            aux[i] = '\0';
        }
    }
}
