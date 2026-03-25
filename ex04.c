#include <stdio.h>


int main (){


    float pao, broa, total_vendas, poupanca;
    printf("Quantidade de paes vendidos: ");
    scanf("%f", &pao);
    printf("Quantidade de broas vendidas: ");
    scanf("%f", &broa);


    total_vendas = (pao*0.12) + (broa*1.5);


    poupanca = total_vendas*0.10;


    printf("Valor total das vendas: %.2f reais\n", total_vendas);
    printf("Valor para poupanca: %.2f\n", poupanca);


    return 0;
}
