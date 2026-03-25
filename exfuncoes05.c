#include <stdio.h>


/*float calcularProduto(float num1, float num2){


    printf("%f", num1 * num2); // a funcao nao retorna valor, para funcionar mudar retorno para void
}*/


//Letra a) já com alteração requerida na letra C


float calcularProduto(float num1, float num2){


    float calculo;
    calculo = num1*num2;
    return calculo;
}


int main (){


    float x = 4 + 3 * 2 / calcularProduto(2,3);


    printf("O valor de x eh %.2f", x); // Resultado = 5
    return 0;
}
//Letra b)


float calcularProduto(float num1, float num2){


    float calculo;
    calculo = num1*num2;
    return calculo;
}


int main (){


    float x =  calcularProduto(2); // a funcao tem 2 parâmetros, ao inserir somente um o código não roda porque a chamada da função tem argumentos insuficientes


    printf("O valor de x eh %.2f", x);
    return 0;
}
