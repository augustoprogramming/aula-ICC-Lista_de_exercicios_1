#include <stdio.h>


float celsiusParaFahrenheit(float valorCelsius){


    float Faherenheit;
    Faherenheit = (valorCelsius*1.8)+32;
    return Faherenheit;
}


int main (){


    float conversao;
    conversao = celsiusParaFahrenheit(30);


    printf("%.2f Fahrenheit\n", conversao);
    return 0;
}
