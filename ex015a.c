#include <stdio.h>
#include <math.h>

// 15. a) Faça um Programa que peça dois números e imprima o maior deles.

int main () {
    int c;
    double valores, maior;
           
    for (c = 1; c <= 2; c++) {
        
        printf ("Escreva o %da valor: \n", c);
        scanf ("%lf", &valores);

        if (valores > maior) {
            
           maior = valores;

        }
    
    }

    printf ("O maior valor digitado foi: %2.lf", maior);

    return 0;
}

