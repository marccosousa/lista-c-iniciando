#include<stdio.h>

// 1. Faça um Programa que peça um número e então mostre a mensagem na tela: O número informado foi [número]. 

int main () {
    double num; 
    printf ("Digite um numero: ");
    scanf ("%lf", &num);
    printf ("O numero digitado foi: [%.2lf]", num);

    return 0;
}