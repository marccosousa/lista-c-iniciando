#include<stdio.h>
#include<math.h>

// 4. Faça um Programa que converta metros para centímetros.

int main() {
    double metros;
    printf("----- C O N V E R S O R (m --> cm) ----- \n");
    printf ("Metros que quer converter: ");
    scanf ("%lf", &metros);

    printf ("%.2lfm para centimentros: %.2lfcm", metros, metros*100);
    
    
    return 0;
}