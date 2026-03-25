#include <stdio.h>


int converterParaMinutos(int h, int m){


    int r;
    r = m+h*60;
    return r;
}


int main (){


    int x;
    x = converterParaMinutos(1, 60);
    printf("O total eh: %d minutos\n", x);

}
