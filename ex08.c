#include <stdio.h>


int main (void){


    float preco_litro, pagamento, litros;
    printf("Insira o preco do litro da gasolina: ");
    scanf("%f", &preco_litro);
    printf("Insira o valor do pagamento: ");
    scanf("%f", &pagamento);


    litros = pagamento/preco_litro;


    printf("Voce colocou %.2f litros no tanque.\n", litros);
    return 0;
}
