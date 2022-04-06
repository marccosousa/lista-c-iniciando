#include <stdio.h>
#include <math.h>

// 11. Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a
// seguinte fórmula: (72.7*altura) - 58 

int main() {

    double altura; 

    printf("Diga sua altura (m): ");
    scanf ("%lf", &altura);

    printf ("Seu peso ideal e: %.2fKg", 72*altura-58);

    return 0;
}