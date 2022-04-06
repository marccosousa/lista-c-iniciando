#include <stdio.h>
#include <stdlib.h>

// 15. c) Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino,
// M - Masculino, Sexo Inválido.

int main () {

    char sexo;

    printf ("Qual o seu sexo? (M - Masculino / F - Feminino) ");
    scanf ("%c", &sexo);
    
    if (sexo == 'M' || sexo == 'm') {

        printf ("Sexo Masculino");
    
    } else if (sexo == 'F' || sexo == 'f') {

        printf ("Sexo Feminino", sexo);
    
    } else {

        printf ("Sexo Invalido");
    }
    
    return 0; 
}