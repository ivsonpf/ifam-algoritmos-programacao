#include <stdio.h>

int main() {
    float reais, cotacao, dolares;
    printf("Digite o valor em R$ e a cotacao atual: ");
    scanf("%f %f", &reais, &cotacao);
    dolares = reais / cotacao;
    printf("Valor em US$: %.2f\n", dolares);
    return 0;
}
