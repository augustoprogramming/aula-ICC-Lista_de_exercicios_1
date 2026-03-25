#include <stdio.h>


float calcularAreaCirculo(float raio){


    float resultado;
    resultado = 3.14159*(raio*raio);
    return resultado;
}


int main (){


    float areaC;
    areaC = calcularAreaCirculo(5);


    printf("A area do circulo eh de: %.2f\n", areaC);
    return 0;
}
