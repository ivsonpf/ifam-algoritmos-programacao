#include <stdio.h>

int main() {
    float massa_inicial, massa_final;
    int tempo_segundos = 0;
    
    printf("Digite a massa inicial (gramas): ");
    scanf("%f", &massa_inicial);
    
    massa_final = massa_inicial;
    while (massa_final >= 0.5) {
        massa_final /= 2;
        tempo_segundos += 50;
    }
    
    printf("Massa inicial: %.2f g\n", massa_inicial);
    printf("Massa final: %.2f g\n", massa_final);
    printf("Tempo total: %d segundos\n", tempo_segundos);
    return 0;
}
