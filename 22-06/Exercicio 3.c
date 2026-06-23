#include <stdio.h>

int contar_ocorrencias(int num[20], int k);

int main() {
    int vetor[20] = {2, 5, 7, 2, 9, 2, 4, 1, 7, 1, 3, 2, 6, 2, 8, 0, 2, 9, 2, 5};
    int valor_procurado = 2;
    
    int ocorrencias = contar_ocorrencias(vetor, valor_procurado);
    
    printf("O numero %d aparece %d vez(es) no vetor.\n", valor_procurado, ocorrencias);
    
    return 0;
}

int contar_ocorrencias(int num[20], int k) {
    int i, contador = 0;
    
    for(i = 0; i < 20; i++) {
        if(num[i] == k) {
            contador++;
        }
    }
    
    return contador;
}
