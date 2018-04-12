//Suma y multiplcación recursivo

#include <stdio.h>
#include <stdlib.h>

int suma(int num1, int num2);
int multiplicacion(int num1, int num2);

int main(){
    int num1, num2, res;

    printf("Introduce dos numeros: \n");
    printf("Primer numero: ");
    scanf("%i", &num1);

    printf("Segundo numero: ");
    scanf("%i", &num2);

    res = suma(num1, num2);
    printf("El resultado de la suma entre %i y %i es %i: \n", num1, num2, res);

    res = multiplicacion(num1, num2);
    printf("El resultado del producto entre %i y %i es %i: \n", num1, num2, res);

    return 0;
}

int suma(int num1, int num2){
    if(num2 == 0){
        return num1;
    }else{
        return 1+suma(num1, num2-1);
    }
}

int multiplicacion(int num1, int num2){
    if (num2 == 1){
        return num1;
    }else{
        return num1 + multiplicacion(num1, num2-1);
    }
}
