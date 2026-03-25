#include <stdio.h>


int main (){


    float preco_produto, novoPreco;
    printf("Insira o preco do produto: ");
    scanf("%f", &preco_produto);


    novoPreco = preco_produto - (preco_produto*0.1);


    printf("Preco do produto: %.2f reais.\n", preco_produto);
    printf("Preco do produto com 10%% de desconto: %.2f reais.\n", novoPreco);


    return 0;
}
