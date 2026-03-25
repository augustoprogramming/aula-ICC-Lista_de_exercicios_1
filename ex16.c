#include <stdio.h>


int main (){


    int litrosRefresco, agua, suco;


    printf("Quantos litros de refresco voce quer fazer: ");
    scanf("%d", &litrosRefresco);


    agua = 0.8*litrosRefresco;
    suco = 0.2*litrosRefresco;


    printf("Para %d litros de refresco sao necessarios:\n", litrosRefresco);
    printf("%d litros de agua\n", agua);
    printf("%d litros de suco\n", suco);


    return 0;
}
