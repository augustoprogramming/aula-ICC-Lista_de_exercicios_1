#include <stdio.h>


int main (){


    float salario_mensal, percentual_reajuste, reajuste, salario_final;
    printf("Digite seu salario mensal atual: ");
    scanf("%f", &salario_mensal);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual_reajuste);
    reajuste = salario_mensal*(percentual_reajuste/100);
    salario_final = salario_mensal + reajuste;


    printf("O valor do reajuste eh de +%.2f reais na sua conta.\n", reajuste);
    printf("Seu novo salario eh de: %.2f reais\n", salario_final);


    return 0;
}