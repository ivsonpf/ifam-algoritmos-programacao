#include <stdio.h>

int fatorial(int n); // Declaração da função

int main() {
    int v;
    
    v = fatorial(5);
    printf("Fatorial de 5 = %d\n", v);
    
    v = fatorial(4);
    printf("Fatorial de 4 = %d\n", v);
    
    return 0;
}

int fatorial(int n) {
    int fat = 1;
    int i; // Variável declarada fora do for
    for (i = 1; i <= n; i++) {
        fat = fat * i;
    }
    return fat;
}
