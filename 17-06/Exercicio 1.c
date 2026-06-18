#include <stdio.h>

float media(float a, float b, float c); // Declaração da função

int main() {
    float v;
    
    v = media(7.5, 8.0, 9.5);
    printf("Media = %.2f\n", v);
    
    v = media(5.0, 6.5, 4.0);
    printf("Media = %.2f\n", v);
    
    return 0;
}

float media(float a, float b, float c) {
    return (a + b + c) / 3.0;
}
