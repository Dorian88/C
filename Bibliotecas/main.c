/* Realizar un programa para controlar varias bibliotecas usando estructuras
 * dentro de estructuras
 */

#include <stdio.h>
#include <string.h>

#define N 50

typedef struct{
    char nombre_lib[N];
    char autor[N];
    int lleno_lib;
}libro;

typedef struct{
    char nombre_bi[N];
    libro lib[10];
    int lleno_bi;
}biblioteca;

biblioteca biblio[3];

void vacio();
void cambio(char palabra[N]);
void anadebi();
void anadelib();
void consulta();

int main(){
    int op;
    char key;

    vacio();

    do{
        do{
            printf("Elige una opcion a realizar: \n");
            printf("1. Anadir una nueva biblioteca. \n");
            printf("2. Anadir un libro a una biblioteca. \n");
            printf("3. Consultar un libro. \n");
            scanf("%i", &op);
        }while(op < 1 || op > 3);

        switch(op){
            case 1:{
                anadebi();
                break;
            }
            case 2:{
                anadelib();
                break;
            }
            case 3:{
                consulta();
                break;
            }
        }
        printf("Quieres realizar otra operacion mas? (S/N): ");
        fflush(stdin);
        scanf("%c", &key);
    }while(key == 'S' || key == 's');

    return 0;
}

void vacio(){
    int i, j;
    for(i = 0; i < 3; i++){
        biblio[i].lleno_bi = 0;
        for(j = 0; j < 10; j++){
            biblio[i].lib[j].lleno_lib = 0;
        }
    }
}

void cambio(char palabra[N]){
    int i;

    for(i = 0; i < N; i++){
        if (palabra[i] == '\n'){
            palabra[i] = '\0';
        }
    }
}

void anadebi(){
    int i, aux;
    aux = 0;

    for(i = 0; i < 3 && aux == 0; i++){
        if(biblio[i].lleno_bi == 0){
            printf("Introduce un nombre para la biblioteca: ");
            fflush(stdin);
            fgets(biblio[i].nombre_bi, N, stdin);
            cambio(biblio[i].nombre_bi);
            biblio[i].lleno_bi = 1;
            aux = 1;
        }
    }

    if (aux == 0){
        printf("Ya no se pueden abrir nuevas bibliotecas.\n");
    }
}

void anadelib(){
    int i, j, op, aux;
    aux = 0;

    for(i = 0; i < 3; i++){
        if(biblio[i].lleno_bi == 1){
            printf("%i. %s. \n", i, biblio[i].nombre_bi);
        }
    }

    scanf("%i", &op);

    for(j = 0; j < 10 && aux == 0; j++){
        if(biblio[op].lib[j].lleno_lib == 0){
            printf("Introduce el nombre del libro: ");
            fflush(stdin);
            fgets(biblio[op].lib[j].nombre_lib, N, stdin);
            cambio(biblio[op].lib[j].nombre_lib);

            printf("Introduce el nombre del autor: ");
            fflush(stdin);
            fgets(biblio[op].lib[j].autor, N, stdin);
            cambio(biblio[op].lib[j].autor);

            biblio[op].lib[i].lleno_lib = 1;
            aux = 1;
        }
    }
}

void consulta(){
    int op, i, j, com;
    char buscar[N];

    com = 1;

    do{
        printf("Buscar por nombre del libro o nombre del autor: \n");
        printf("1. Nombre del libro. \n");
        printf("2. Autor \n");
        scanf("%i", &op);
    }while(op < 1 || op > 2);

    switch(op){
        case 1:{
            printf("Introduce el nombre del libro: ");
            fflush(stdin);
            fgets(buscar, N, stdin);
            cambio(buscar);

            for(i = 0; i < 3; i++){
                com = 1;
                for(j = 0; j < 10; j++){
                    com = strcmp(buscar, biblio[i].lib[j].nombre_lib);
                    if(com == 0){
                        printf("El libro %s se encuentra en la biblioteca %s. \n", buscar, biblio[i].nombre_bi);
                        printf("El autor del libro es %s. \n", biblio[i].lib[j].autor);
                    }
                }
            }
            break;
        }

        case 2:{
            printf("Introduce el nombre del autor: ");
            fflush(stdin);
            fgets(buscar, N, stdin);
            cambio(buscar);

            for(i = 0; i < 3; i++){
                com = 1;
                for(j = 0; j < 10; j++){
                    com = strcmp(buscar, biblio[i].lib[j].autor);
                    if(com == 0){
                        printf("El libro %s se encuentra en la biblioteca %s. \n", biblio[i].lib[j].nombre_lib, biblio[i].nombre_bi);
                    }
                }
            }
            break;
        }
    }
}
