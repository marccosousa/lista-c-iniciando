 #include<stdio.h>
 #include<math.h>

 // 3b. Faça um Programa que peça as 4 notas bimestrais e mostre a média.

 int main () {

    double contador, notas, soma; 
        
    for(contador = 1; contador <=4 ; contador++) {

        printf("Escreva a %.0lfa nota: \n", contador);
        scanf ("%lf", &notas);
        soma = soma + notas; 

    }
    printf ("\n");
    printf ("------- MEDIA DO ALUNO -------\n");
    printf ("\n");
    printf ("A media do aluno foi: %.2lf", soma / 4 );


    return 0;
}