#include <stdio.h>

/* Funcao que retorna o maior de dois inteiros */
int maior_valor(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main(void) {
    int x = 15;
    int y = 20;
    int maior;

    maior = maior_valor(x, y);
    printf("O maior valor e: %d\n", maior);

    return 0;
}
