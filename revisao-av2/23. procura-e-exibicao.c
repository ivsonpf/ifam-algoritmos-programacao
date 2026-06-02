#include <stdio.h>

int main() {
    int v[10], busca, encontrado = 0;
    for (int i = 0; i < 10; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("Digite o valor para buscar: ");
    scanf("%d", &busca);
    
    for (int i = 0; i < 10; i++) {
        if (v[i] == busca) {
            printf("Encontrado na posicao: %d\n", i);
            encontrado = 1;
        }
    }
    if (!encontrado) printf("Valor nao encontrado\n");
    return 0;
}
