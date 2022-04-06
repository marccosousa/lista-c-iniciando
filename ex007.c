#include <stdio.h>
#include <math.h>

// 7. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
//    Calcule e mostre o total do seu salário no referido mês.

int main() {

    double salhora, horas; 
    
    printf ("Salario/H: ");
    scanf ("%lf", &salhora);

    printf ("Horas trabalhadas no mes: ");
    scanf ("%lf", &horas);

    printf ("Seu salario no mes foi: R$%.2lf", salhora*horas);

    return 0; 
}