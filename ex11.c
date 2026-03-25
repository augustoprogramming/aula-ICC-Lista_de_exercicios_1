#include <stdio.h>


int main (){


    int p, m, g, total;


    printf("Quantidade de camisas pequenas vendidas: ");
    scanf("%d", &p);
    printf("Quantidade de camisas medias vendidas: ");
    scanf("%d", &m);
    printf("Quantidade de camisas grandes vendidas: ");
    scanf("%d", &g);


    total = p*10 + m*12 + g*15;


    printf("O total arrecadado eh de %d reais\n", total);
    return 0;
}
