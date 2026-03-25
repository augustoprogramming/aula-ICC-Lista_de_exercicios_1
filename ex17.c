#include <stdio.h>


int main (){


    float sombraPredio, sombraPessoa, alturaPessoa, alturaPredio;
    printf("Insira sua altura: ");
    scanf("%f", &alturaPessoa);
    printf("Insira tamanho da sua sombra: ");
    scanf("%f", &sombraPessoa);
    printf("Insira tamanho da sombra do predio: ");
    scanf("%f", &sombraPredio);


    alturaPredio = (alturaPessoa*sombraPredio)/sombraPessoa;


    printf("A altura do predio eh de: %.2f metros\n", alturaPredio);


    return 0;
}
