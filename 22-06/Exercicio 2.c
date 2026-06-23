#include <stdio.h>

float encontrar_maior(float num[10]);

int main() {
    float vetor[10] = {1.5, 3.2, 9.8, 4.1, 15.5, 2.0, 7.7, 8.9, -0.5, 6.4};
    
    float maior_valor = encontrar_maior(vetor);
    
    printf("O maior valor do vetor e: %.2f\n", maior_valor);
    
    return 0;
}

float encontrar_maior(float num[10]) {
    int i;
    float maior = num[0]; // Assume que o primeiro é o maior inicialmente
    
    for(i = 1; i < 10; i++) {
        if(num[i] > maior) {
            maior = num[i]; // Atualiza o maior valor encontrado
        }
    }
    
    return maior;
}
