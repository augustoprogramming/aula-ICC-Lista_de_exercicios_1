#include <stdio.h>
#include <math.h>


float calcularHipotenusa(int catB, int catC){


    float resultado;
    resultado = sqrt(pow(catB,2) + pow(catC,2));
    return resultado;
}


int main (){


    float hipotenusa;
    hipotenusa= calcularHipotenusa(3,4);


    printf("A hipotenusa do triangulo eh de %.2f\n", hipotenusa);
    return 0;
}
