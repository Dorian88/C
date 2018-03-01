//1. Funciones de lecturas de archivos.
//2. Sacar los datos de un archivo y almacenarlos en una estructura.
//3. Escribir en un archivo de texto.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *nombre;
    int edad;
}trabajadores;

trabajadores *empleados;

void vaciar(char temp[]);
void copiar(char temp[], int l);
void cambio(char aux[]);

int main(){
    FILE *archivo1, *archivo,*/ *archivo2;
    char aux, aux1[100], temp[50], aux2, aux3[50];
    int cont = 0, i, k num;

    //1. Lectura de archivos
    archivo = fopen("Ejemplo_archivos.txt", "r"); //Abre un archivo en modo lectura
    if(archivo == NULL){
        printf("No se ha podido abrir el archivo.\n");
        exit(1);
    }

    //Leer un archivo caracter a caracter
    while(aux != EOF){
        aux=fgetc(archivo);
        printf("%c", aux);
    }
    printf("\n");

    fclose(archivo);

    //Leer un archivo con string
    archivo = fopen("Ejemplo_archivos.txt", "r"); //Abre un archivo en modo lectura
    if(archivo == NULL){
        printf("No se ha podido abrir el archivo.\n");
        exit(1);
    }

    while(!feof(archivo)){
        fgets(aux1, 100, archivo);
        printf("%s", aux1);
    }
    printf("\n");

    fclose(archivo);

    //2. Consulta de datos  y almacenar en una estructura

    archivo1 = fopen("Trabajadores.txt", "r");
    if(archivo1 == NULL){
        printf("No se ha podido abrir el archivo.\n");
        exit(1);
    }

    while(!feof(archivo1)){
        fgets(temp, 50, archivo1);
        cont++;
    }

    rewind(archivo1);

    empleados = (trabajadores*)malloc(cont*sizeof(trabajadores));
    if(empleados == NULL){
        printf("No se ha podido reservar memoria.\n");
        exit(1);
    }

    for(i=0; !feof(archivo1); i++){
        vaciar(temp);
        aux2 = '0';
        for(k=0; aux2!='-'; k++){
            aux2 = fgetc(archivo1);
            if(aux2!='-'){
                temp[k] = aux2;
            }
        }
        copiar(temp,i);

        fgets(temp, 4, archivo1);
        empleados[i].edad = atoi(temp);

        printf("Nombre: %s Edad: %i.\n", empleados[i].nombre, empleados[i].edad);

    }
    fclose(archivo1);

    //3. Escritura de archivos
    archivo2 = fopen("Escribir_archivo.txt", "w"); //Se abre el archivo para la escritura o se crea si no existe
    if(archivo2 == NULL){
        printf("No se ha podido abrir el archivo.\n");
        exit(1);
    }

    printf("Escribe un numero cualquiera: ");
    scanf("%i", &num);

    printf("Escribe una frase: ");
    fgets(aux3, 50, stdin);

    cambio(aux3);

    fprintf(archivo2, "El numero introducido es: %i\n", num);
    fprintf(archivo2, "La frase escrita es: %s\n", aux3);

    fclose(archivo2);

    return 0;
}

void vaciar(char temp[]){
    int j;
    for(j = 0; j < 50; j++){
        temp[j] = '\0';
    }
}

void copiar(char temp[], int l){
    int n = strlen(temp) + 1;
    empleados[l].nombre = (char*)malloc(n*sizeof(char));
    if(empleados[l].nombre == NULL){
        printf("No se ha podido reservar memoria.\n");
        exit(1);
    }

    strcpy(empleados[l].nombre, temp);
}

void cambio(char aux[]){
    int m;

    for(m = 0; m < 50; m++){
        if(aux[m] == '\n'){
            aux[m] = '\0';
        }
    }
}
