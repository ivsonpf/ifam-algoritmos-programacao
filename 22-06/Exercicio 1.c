#include <stdio.h>

int contar_zeros(int num[8]);

int main() {
    // Vetor de teste com três zeros
    int vetor[8] = {1, 0, 5, 0, 9, -3, 0, 4}; 
    
    int qtd_zeros = contar_zeros(vetor);
    
    printf("O vetor possui %d zero(s).\n", qtd_zeros);
    
    return 0;
}

int contar_zeros(int num[8]) {
    int i, contador = 0;
    
    for(i = 0; i < 8; i++) {
        if(num[i] == 0) {
            contador++;
        }
    }
    
    return contador;
}
