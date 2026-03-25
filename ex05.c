#include <stdio.h>


int main (){

    int valor_centavos, centavos, emreal, cents50, cents25, cents10, cents5, cents1;
    printf("Digite um valor em centavos:\n");
    scanf("%d", &centavos);

    valor_centavos = centavos;
    emreal = centavos/100;
    centavos = centavos%100;


    cents50 = centavos/50;
    centavos = centavos%50;


    cents25 = centavos/25;
    centavos = centavos%25;


    cents10 = centavos/10;
    centavos = centavos%10;


    cents5 = centavos/5;
    centavos = centavos%5;


    cents1 = centavos/1;




    printf("--------------CONVERSAO CENTAVOS--------------\n");
    printf("%d centavos sao: \n", valor_centavos);
    printf("%d moedas de 1 real\n", emreal);
    printf("%d moedas de 50 centavos\n", cents50);
    printf("%d moedas de 25 centavos\n", cents25);
    printf("%d moedas de 10 centavos\n", cents10);
    printf("%d moedas de 5 centavos\n", cents5);
    printf("%d moedas de 1 centavos\n", cents1);
    return 0;
}
