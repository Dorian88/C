//Realizar traductor de ingles español
#include <stdio.h>
#include <stdlib.h>
#define N 50

typedef struct{
    char ing[N], esp[N];
    int lleno
}traductor;

traductor trad[N];

void vacio();
void anadir();
void traducir();
void tradu(int opc);
void cambio(char palabra[N]);

int main(){
    int op;
    char key;

    vacio();

    do{
        do{
            printf("Elige que deseas hacer:\n");
            printf("(1) Anadir palabras al traductor.\n");
            printf("(2) Buscar traduccion de una palabra.\n");
            scanf("%i", &op);
        }while(op < 1 || op > 2);

        switch(op){
            case 1:
                anadir();
                break;
            case 2:
                traducir();
                break;
        }
        printf("Introduce si deseas realizar otra operacion: (S/N) ");
        scanf("%c", &key);
    }while(key == 'S' || key == 's');

    return 0;
}

void vacio(){
    int i;

    for(i = 0; i < N; i++){
        trad[i].lleno = 0;
    }
}

void anadir(){
    int i, aux = 0;

    for(i = 0; i < N && aux == 0; i++){
        if(trad[i].lleno == 0){
            printf("Introduce la palabra en ingles: ");
            fflush(stdin);
            fgets(trad[i].ing,N,stdin);
            cambio(trad[i].ing);
            printf("Introduce la palabra en español: ");
            fflush(stdin);
            fgets(trad[i].esp,N,stdin);
            cambio(trad[i].esp);
            trad[i].lleno = 1;
            aux = 1;
        }
    }
}

void traducir(){
    int opc;

    do{
        printf("Elige que deseas hacer:\n");
        printf("(1) Ingles a Espanol.\n");
        printf("(2) Espanol a Ingles.\n");
        scanf("%i", &opc);
    }while(opc < 1 || opc > 2);

    switch(opc){
        case 1:
            tradu(opc);
            break;
        case 2:
            tradu(opc);
            break;
    }
}

void tradu(int opc){
    int j, k, temp = 0;
    char aux[N];

    printf("Introduce la palabra que deseas traducir: ");
    fflush(stdin);
    fgets(aux, N, stdin);
    cambio(aux);

    if(opc == 1){
        for(j = 0; j < N && temp == 0; j++){
            k = strcmp(aux, trad[j].ing);
            if(k==0){
                printf("La traduccion de %s es %s.\n", trad[j].ing, trad[j].esp);
                temp = 1;
            }
        }
    }else{
        for(j = 0; j < N && temp == 0; j++){
            k = strcmp(aux, trad[j].esp);
            if(k==0){
                printf("La traduccion de %s es %s.\n", trad[j].esp, trad[j].ing);
                temp = 1;
            }
        }
    }
}

void cambio(char palabra[N]){
    int i;

    for(i = 0; i<N; i++){
        if (palabra[i] == '\n'){
            palabra[i] = '\0';
        }
    }
}
