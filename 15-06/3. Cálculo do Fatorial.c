#include <stdio.h>

/* Funcao que calcula o fatorial de um numero inteiro */
int fatorial(int n) {
    int fat = 1;
    int i;
    
    for (i = 1; i <= n; i++) {
        fat = fat * i;
    }
    
    return fat;
}

int main(void) {
    int numero = 5;
    int resultado;

    resultado = fatorial(numero);
    printf("O fatorial de %d e: %d\n", numero, resultado);

    return 0;
}
