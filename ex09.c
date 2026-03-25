#include <stdio.h>


int main (){


    float custo_de_fabrica, valor_final;
    printf("Custo de fabrica do carro: ") ;
    scanf("%f", &custo_de_fabrica);
    valor_final = custo_de_fabrica + (custo_de_fabrica*0.28) + (custo_de_fabrica*0.45);


    printf("O custo final do carro para o consumidor eh de %.2f reais\n", valor_final);


    return 0;
}
