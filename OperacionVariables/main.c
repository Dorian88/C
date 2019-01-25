//Operaciones con Variables

#include <stdio.h>
#include <math.h>

#define PI 3.1416;

int main(){
    float /*x,*/ res;
    int /*y,*/ op1, op2;

    //x = PI;
    op1 = 10;
    op2 = 2;

    /*printf("Ingrese un valor para y: ");
    scanf("%i", &y);*/

    /*x = x * y;

    printf("El valor de x es: %f\n", x);*/
    printf("--------------------------------------------------\n");
    res = op1 + op2;
    printf("La suma es: %f\n", res);
    res = op1 - op2;
    printf("La resta es: %f\n", res);
    res = op1 * op2;
    printf("La multiplicacion es: %f\n", res);
    res = op1 / op2;
    printf("La division es: %f\n", res);
    res = op1 % op2;
    printf("El modulo es: %f\n", res);
    res = pow(op1, op2);
    printf("El resultado de la potenciacion es: %f\n", res);
    res = sqrt(op1);
    printf("El resultado de la raiz cuadrada de op1 es: %f\n", res);
    op1++;
    printf("La variable op1 incrementado en 1 (op1++) es: %i\n", op1);
    op2--;
    printf("La variable op1 decrementado en 1 (op2--) es: %i\n", op2);
    return 0;
}
