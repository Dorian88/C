//Manejo de cadenas de caracteres
#include <stdio.h>
#include <string.h>

int main(){
    char vector [13], c1[5], c2[5];

    printf("Introduce una frase: ");
    fgets(vector, 13, stdin);
    printf("%s\n\n", vector);
    printf("No es aconsejable usar las funciones scanf y gets. Se puede usar fgets\n\n");

    printf("Ejemplo: comparar dos cadenas de caracteres\n\n");
    printf("Introduce la primera frase: ");
    fflush(stdin);
    fgets(c1, 5, stdin);
    printf("Introduce la segunda frase: ");
    fflush(stdin);
    fgets(c2, 5, stdin);

    if (strcmp(c1,c2) == 0){
        printf("\nLos dos string son iguales.\n");
    }else{
        printf("\nLos dos string no son iguales.\n");
    }
    return 0;
}
