#include <stdio.h>
#include <math.h>

// 15. Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser
// pintada. Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de
// 18 litros, que custam R$ 80,00. Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
int main () {

    double metros, qTinta, qLata, valor;
    
    printf("Quantos m2 serao pintados? "); // 1lata = 54m² = R$80,00 // 1L = 3m²
    scanf("%lf", &metros);
    printf("\n");

    qTinta = metros / 3; 
    qLata = ceil(qTinta / 18); // função ceil == arredonda valores decimais para cima. 1.4 ~ 2 / 8.1 ~ 9 
    valor = qLata * 80;
    
    printf(" ----- V E N D A DE T I N T A ----- \n");
    printf(" ----- 1Lata = 54m2 = R$80,00 -----\n");
    printf("\n");
    printf ("Voce precisara de %.2lfL de tinta. \n", qTinta);
    printf ("Totalizando %.0lf Latas \n", qLata);
    printf ("Valor: R$%.2lf \n", valor);
    
    return 0;
}