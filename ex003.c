#include <stdio.h>
#include <math.h>

// 3. Faça um Programa que peça as 4 notas bimestrais e mostre a média. 

int main () {

    double nota1, nota2, nota3, nota4;

    printf ("Escreva a 1a nota: ");
    scanf ("%lf", &nota1 );
    
    printf ("Escreva a 2a nota: ");
    scanf ("%lf", &nota2 );
    
    printf ("Escreva a 3a nota: ");
    scanf ("%lf", &nota3 );
    
    printf ("Escreva a 4a nota: ");
    scanf ("%lf", &nota4 );

    printf ("A media das notas foi: %.2lf", (nota1 + nota2 + nota3 + nota4) / 4);
    return 0;
}
