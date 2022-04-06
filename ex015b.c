#include <stdio.h>
#include <math.h>

// 15. b) Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo

int main () {

    int num;      

    printf ("Digite um numero: ");
    scanf ("%d", &num);

    if (num < 0) {

        printf ("O numero %d e NEGATIVO!", num);
    
    } else {

        printf ("O numero %d e POSITIVO!", num);

    }
    return 0;
}
