#include <stdio.h>


int main (){


    float sal, aumento, desconto;


    printf("Insira o valor do seu salario: ");
    scanf("%f", &sal);


    aumento = sal + (sal*0.15);
    desconto = aumento - (aumento*0.08);




    printf("Salario inicial: %.2f\n", sal);
    printf("Salario com aumento: %.2f\n", aumento);
    printf("Salario final %.2f\n", desconto);
    return 0;
}
