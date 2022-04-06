#include<stdio.h>
#include<math.h>

// 6. Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

int main () {
    double lado, area;
    
    printf("Diga o lado do quadrado: ");
    scanf ("%lf", &lado); 
    area = pow(lado,2);

    printf ("A area do quadrado e: %.2lf\n", area);
    printf ("O dobro da area e: %.2lf\n", area * 2);

    return 0;
}