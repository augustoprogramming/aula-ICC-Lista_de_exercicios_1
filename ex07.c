#include <stdio.h>


int main (){


    int idade_anos, idade_meses, idade_dias, dias_idade;
    printf("Expresse sua idade em dias: ");
    scanf("%d", &dias_idade);


    idade_anos = dias_idade/365;
    idade_meses = (dias_idade - idade_anos*365)/30;
    idade_dias =  dias_idade - (idade_anos*365 + idade_meses*30);


    printf("Voce tem %d dias de idade: %d anos, %d meses e %d dias\n", dias_idade, idade_anos, idade_meses, idade_dias);


    return 0;
}
