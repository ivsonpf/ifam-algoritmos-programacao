#include <stdio.h>

/* Funcao que calcula x elevado a potencia p */
double power(double x, int p) {
    double resultado = 1.0;
    int i;
    
    if (p >= 0) {
        for (i = 0; i < p; i++) {
            resultado = resultado * x;
        }
    } else {
        /* Para expoentes negativos */
        for (i = 0; i < -p; i++) {
            resultado = resultado * x;
        }
        resultado = 1.0 / resultado;
    }
    
    return resultado;
}

int main(void) {
    double base = 2.0;
    int expoente = 3;
    double resultado;

    resultado = power(base, expoente);
    printf("%.2f elevado a %d e: %.2f\n", base, expoente, resultado);

    return 0;
}
