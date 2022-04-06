#include <stdio.h>
#include <math.h>

// 12. Tendo como dado de entrada à altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal,
//     utilizando as seguintes fórmulas:
//     a. Para homens: (72.7*h) - 58
//     b. Para mulheres: (62.1*h) - 44.7

int main() {

    double h; 

    printf("Diga sua altura (m): ");
    scanf ("%lf", &h);

    printf ("RESPOSTA A: %.2fKg (PESO IDEAL PARA HOMENS) \n", 72*h-58);
    printf ("RESPOSTA B: %.2fKg (PESO IDEAL PARA MULHERES)\n ", 62.1*h - 44.7);

    return 0;
}