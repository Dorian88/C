#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

double f(double x);
double f1(double x);

int main(){
    int cont = 0;
    float xi = 0.0, ea = 0.0, xz = 0.0;

    printf("Ingrese el valor inicial: ");
    scanf("%f", &xi);
    printf("n\txi\tf(xi)\tf1(xi)\tea\n");

    do{
        xz = xi-(f(xi)/f1(xi));
        ea = ((xz-xi)/xz)*100;
        printf("%i\t %0.4f\t %0.4f\t %0.4f\t %0.4f\n", cont, xi, f(xi), f1(xi), ea);
        xi = xz;
        cont++;
    }while(ea>=0.005);
    return 0;
}

double f(double x){
    double z = (exp(-x))-x;
    return z;
}

double f1(double x){
    double z = (-exp(-x))-1;
    return z;
}
