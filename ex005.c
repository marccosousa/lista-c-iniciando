#include<stdio.h>
#include<math.h>
#define pi 3.14

// 5. Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

int main () {
    
    double raio, area; 

    printf ("Digite o raio do circulo: ");
    scanf ("%lf", &raio);
    area = pi*pow(raio,2);

    printf ("A area do circulo de raio %.2lf e: %.2lf(unidade de medida)", raio, area);

    return 0;
}