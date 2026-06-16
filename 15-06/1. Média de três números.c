#include <stdio.h>

/* Funcao que calcula a media de 3 valores reais */
float media(float x1, float x2, float x3) {
    float resultado;
    resultado = (x1 + x2 + x3) / 3.0;
    return resultado;
}

int main(void) {
    float a = 5.0;
    float b = 7.0;
    float c = 9.0;
    float m;

    m = media(a, b, c);
    printf("A media e: %f\n", m);
    
    return 0;
}
