#include<stdio.h>
#include<math.h>

int main () {

    double kgs;
    printf ("Quantos kg de peixe Joao pescou? ");
    scanf ("%lf", &kgs);

    if (kgs > 50) {
        double exe, multa;
        
        exe = kgs - 50;
        multa = exe * 4; 

        printf ("Joao pescou: %.3lf(kg) \n", kgs);
        printf ("Kgs excedidos: %.3lf(kg) \n", exe);
        printf ("Precisara pagar R$%.2lf de multa! \n", multa); 

    } else {

        printf ("NAO PRECISARA PAGAR MULTA POIS NAO HA PESO EXCEDIDO!");

    }


    return 0;
}