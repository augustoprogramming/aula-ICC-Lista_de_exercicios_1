#include <stdio.h>


int main (){


    int idade_anos, idade_meses, idade_dias, dias_idade;
    printf("Expresse sua idade em anos/meses/dias: ");
    scanf("%d%d%d", &idade_anos, &idade_meses, &idade_dias);


    dias_idade = (idade_anos*365)+(idade_meses*30)+ idade_dias;


    printf("\nVoce tem %d dias de idade.\n", dias_idade);


    return 0;
}
