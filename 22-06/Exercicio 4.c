#include <stdio.h>

void somar(float a[5], float b[5]);

int main() {
    int i;
    float vetorA[5] = {1.0, 2.5, 3.0, 4.2, 5.0};
    float vetorB[5] = {5.0, 2.5, 2.0, 1.8, 1.0};
    
    // Chama a função passando os dois vetores
    somar(vetorA, vetorB);
    
    printf("Valores do vetor 'A' apos a soma:\n");
    for(i = 0; i < 5; i++) {
        printf("%.2f\t", vetorA[i]);
    }
    printf("\n");
    
    return 0;
}

void somar(float a[5], float b[5]) {
    int i;
    for(i = 0; i < 5; i++) {
        // Soma os elementos na mesma posição e guarda no vetor A
        a[i] = a[i] + b[i]; 
    }
}
