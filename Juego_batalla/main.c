//Juego de batallas por turnos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int salud;
    int mana;
    int fuerza;
    int magia;
}heroe;

typedef struct{
    int salud;
    int fuerza;
}villano;

heroe yo;
villano *otros;

void introduceYo();
void introduceVillano(int n);
void asignamem(int *n);

int main(){
    int cont = 0, op, i, objetivo, pegar;
    int n = 0; //Numero de villanos.
    srand(time(NULL));

    introduceYo();
    asignamem(&n);

    do{
        do{
            printf("1. Atacar\n");
            printf("2. Magia\n");
            scanf(" %i", &op);
        }while(op < 1 || op > 2);

        printf("Elige al villano que quieres atacar\n");
        for(i = 0; i < n; i++){
            printf("El villano %i tiene una vida de: %i \n", i, otros[i].salud);
        }
        scanf("%i", &objetivo);

        if (otros[objetivo].salud > 0){
            switch(op){
                case 1:
                    pegar = yo.fuerza;
                    printf("He pegado %i.\n", pegar);
                    otros[objetivo].salud -= pegar;
                    printf("La salud del villano %i es de %i:\n", objetivo, otros[objetivo].salud);
                    break;
                case 2:
                    if(yo.mana > 0){
                        pegar = yo.mana * (rand() % 3);
                        printf("He pegado %i.\n", pegar);
                        otros[objetivo].salud -= pegar;
                        printf("La salud del villano %i es de %i:\n", objetivo, otros[objetivo].salud);
                    }else{
                        printf("No tienes mana!!\n");
                    }
                    break;
            }
        }else{
            printf("Has vencido a tu rival!!\n");
        }

        printf("Los villanos atacan: \n");
        for(i=0; i < n; i++){
            if(otros[i].salud > 0){
                pegar = otros[i].fuerza * (rand()%3);
                printf("El villano %i me ha golpeado %i \n", i, pegar);
                yo.salud -= pegar;
                printf("Mi salud es de %i\n", yo.salud);
            }
        }

        if((cont % 2) == 0){
            otros = (villano*)realloc(otros, (n+1)* sizeof(villano));
            if (otros == NULL){
                    printf("No se ha podido reservar memoria.\n");
                    exit(1);
            }
            introduceVillano(n);
            n++;
        }
        cont++;
    }while(yo.salud > 0);
    return 0;
}

void introduceYo(){
    yo.salud = 1000;
    yo.mana = 100;
    yo.fuerza = 50;
    yo.magia = 100;
}

void introduceVillano(int n){
    otros[n].salud = 100;
    otros[n].fuerza = 50;
}

void asignamem(int *n){
    otros = (villano*)malloc((*n+1)*sizeof(villano));
    if (otros == NULL){
        printf("No se ha podido reservar memoria.\n");
        exit(1);
    }
    introduceVillano(*n);
    (*n)++;
}
