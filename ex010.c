#include<stdio.h>
#include<math.h>

// 10. Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
// a. o produto do dobro do primeiro com metade do segundo.
// b. a soma do triplo do primeiro com o terceiro.
// c. o terceiro elevado ao cubo.

int main () {

    double num1, num2, num3;

    printf ("Digite um numero inteiro: ");
    scanf ("%lf", &num1);

    printf ("Digite outro numero inteiro: ");
    scanf ("%lf", &num2);

    printf ("Agora digite um numero real (tipo float): ");
    scanf ("%lf", &num3);

    printf ("RESPOSTA A: %.0f \n", (num1 * 2) * (num2 / 2));
    printf ("RESPOSTA B: %.2f \n", num1*3 + num3 );
    printf ("RESPOSTA C: %.3f \n", pow(num3,3));
    
    return 0;
}