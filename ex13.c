#include <stdio.h>


int main (){


    int divisao;
    float conta, divisaoF, felipe;


    printf("Insira o valor da conta: ");
    scanf("%f", &conta);
    divisaoF = conta/3;
    divisao = conta/3;
    felipe = divisaoF + (divisaoF-divisao)*2;


    printf("Calos vai pagar: %d reais\n", divisao);
    printf("Andre vai pagar: %d reais\n", divisao);
    printf("Felipe vai pagar %.2f reais\n", felipe);
    return 0;
}
