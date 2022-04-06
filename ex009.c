#include<stdio.h>
#include<math.h>

// 9. Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.

int main () {
    double F, C;
    printf("Temperatura em Celsius: ");
    scanf ("%lf", &C);

    F = C * 9 / 5 + 32; 

    printf ("Conversao para Fahreinheit: %.lf", F); 

    return 0;
}