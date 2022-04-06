#include <stdio.h>
#include <math.h>

int main() {

    double salhora, horas, salario, inss, sindicato, ir; 
    
    printf ("Salario/H: ");
    scanf ("%lf", &salhora);

    printf ("Horas trabalhadas no mes: ");
    scanf ("%lf", &horas);

    salario = salhora * horas;  
    inss = salario * 8/100;
    sindicato = salario * 5/100;
    ir = salario * 11/100;

    printf ("SALaRIO BRUTO:     + R$%.2lf \n", salario);
    printf ("iNSS (8%%):         - R$%.2lf \n", inss);
    printf ("SINDICATO (5%%):    - R$%.2lf \n", sindicato);
    printf ("IR (11%%):          - R$%.2lf \n", ir); 
    printf ("SALaRIO LIQUIDO:     R$%.2lf \n", salario - inss - sindicato - ir);

    return 0; 
}