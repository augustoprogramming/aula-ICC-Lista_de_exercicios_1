#include <stdio.h>


int main (){


    int qtd_cavalos, qtd_ferraduras;
    printf("Quantidade de cavalos comprados: ");
    scanf("%d", &qtd_cavalos);


    qtd_ferraduras = qtd_cavalos * 4;


    printf("Sao necessarias %d ferraduras para equipar TODOS os cavalos do haras.\n", qtd_ferraduras);


    return 0;
}
