#include <stdio.h>

void divisores(int n); // Declaração da função

int main() {
    divisores(12);
    divisores(7);
    return 0;
}

void divisores(int n) {
    int i; // Variável declarada fora do for
    printf("Divisores de %d: ", n);
    for (i = 1; i <= n; i++) {
        // Se o resto da divisão de 'n' por 'i' for zero, 'i' é divisor
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
