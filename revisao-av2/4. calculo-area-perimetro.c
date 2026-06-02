#include <stdio.h>

int main() {
    float base, altura, area, perimetro;
    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &altura);
    area = base * altura;
    perimetro = 2 * (base + altura);
    printf("Area: %.2f\nPerimetro: %.2f\n", area, perimetro);
    return 0;
}
