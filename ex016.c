#include <stdio.h>
#include <math.h>

// 16. Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada
// por aluno e apresentar: 
// a) A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
// b) A mensagem "Reprovado", se a média for menor do que sete;
// c) A mensagem "Aprovado com Distinção", se a média for igual a dez. 

int main () {

    int c; 
    float notas, soma, media; 

    for (c = 1 ; c <=2 ; c++) {

        printf("Escreva a %da nota do aluno: ", c);
        scanf("%f", &notas);
        
        soma = soma + notas; 
        media = soma / 2; 
        
        }

        if (media == 10 ) {

            printf ("MEDIA: %.2f \n", media);
            printf ("Aprovado com Distincao"); 

        } else if (media < 7 ) {

            printf ("MEDIA: %.2f \n", media);
            printf ("REPROVADO! ");

        } else {

            printf ("MEDIA: %.2f \n", media);
            printf ("APROVADO!"); 
        }
       
    return 0;
}