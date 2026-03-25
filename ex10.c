#include <stdio.h>


int main (){


    float n1, n2, n3, mediap;
    printf("Digite 3 notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    mediap = (n1*1+n2*2+n3*3)/6;


    printf("A media ponderada das notas inseridas eh: %.2f pontos\n", mediap);
    return 0;
}
