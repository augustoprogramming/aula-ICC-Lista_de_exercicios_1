#include <stdio.h>


int main (){


    int horasT, horasEx, salario_bruto;
    float salario_liqudo;


    printf("Insira a quantidade de horas normais trabalhadas: ");
    scanf("%d", &horasT);
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%d", &horasEx);


    salario_bruto = horasT*10 + horasEx*15;


    salario_liqudo = salario_bruto - (salario_bruto*0.10);


    printf("Seu salario bruto eh de: %d reais\n", salario_bruto);
    printf("Seu salario liquido eh de: %.2f reais\n", salario_liqudo);


    return 0;
}
