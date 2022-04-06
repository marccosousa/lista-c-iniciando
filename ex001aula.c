#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    double num1, num2;                                                    
    printf ("Digite o primeiro numero: ");                                
    scanf ("%lf", &num1);
    
    printf ("Digite o segundo numero: ");
    scanf ("%lf", &num2);

    printf ("\n");
    printf("---------- R E S P O S T A S ----------\n");
    printf ("\n");
    printf ("RESPOSTA A: %.2f\n", num1 + num2); 
    printf ("RESPOSTA B: %.2f\n", num1 * pow(num2,2));
    printf ("RESPOSTA C: %f\n", sqrt(pow(num1,2) + pow (num2,2)));
    printf ("RESPOSTA D: %.2f\n", pow(num1, 2)); 
    printf ("RESPOSTA E: %f\n", sin(num1 - num2));
    printf ("RESPOSTA F: %.2f\n", fabs(num1));
    
    return 0;
}