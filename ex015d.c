#include <stdio.h>
#include <stdlib.h>

//15. d) Faça um Programa que verifique se uma letra digitada é vogal ou consoante. 

int main () {

    char letra;
    
    printf ("Digite uma letra: "); 
    scanf ("%c", &letra);

    if (letra == 'A' || letra == 'a' || letra == 'E' || letra == 'e' || letra == 'I' || letra == 'i' 
        || letra == 'O' || letra == 'o' || letra == 'U' || letra == 'u') { 
        
        printf ("Letra digita: %c - Vogal", letra);

    } else {

        printf ("Letra digita: %c - Consoante", letra);
    }
        
    return 0; 
} 

