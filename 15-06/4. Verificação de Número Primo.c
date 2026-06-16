#include <stdio.h>

/* Funcao que verifica se um numero e primo */
int verifica_primo(int n) {
    int i;
    
    if (n <= 1) {
        return 0; /* 0 e 1 nao sao primos */
    }
    
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; /* Encontrou um divisor, nao e primo */
        }
    }
    
    return 1; /* Nao encontrou divisores, e primo */
}

int main(void) {
    int numero = 7;
    int eh_primo;

    eh_primo = verifica_primo(numero);
    
    if (eh_primo == 1) {
        printf("%d e primo.\n", numero);
    } else {
        printf("%d nao e primo.\n", numero);
    }

    return 0;
}
