#include <stdio.h>

float maior(float a, float b); // Declaração da função

int main() {
    float v;
    
    v = maior(10.5, 20.3);
    printf("Maior valor = %.2f\n", v);
    
    v = maior(7.1, 3.4);
    printf("Maior valor = %.2f\n", v);
    
    return 0;
}

float maior(float a, float b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
