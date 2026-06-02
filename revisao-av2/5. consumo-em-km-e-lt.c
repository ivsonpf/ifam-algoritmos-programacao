#include <stdio.h>

int main() {
    float distancia, combustivel, consumo;
    printf("Digite a distancia (km) e o combustivel (L): ");
    scanf("%f %f", &distancia, &combustivel);
    consumo = distancia / combustivel;
    printf("Consumo medio: %.2f km/l\n", consumo);
    return 0;
}
