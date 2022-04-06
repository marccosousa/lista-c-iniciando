#include<stdio.h>
#include<math.h>

// 8. Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus
// Celsius. C = 5 * ((F-32) / 9).

int main () {
    double F, C;
    printf("Temperatura em Fahrenheit: ");
    scanf ("%lf", &F);

    C = 5 * ((F - 32) / 9);

    printf ("Conversao para Celsius: %.lf", C); 

    return 0;
}