#include <stdio.h>

int main() {
    int v[20], maior;
    for(int i = 0; i < 20; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
        if (i == 0 || v[i] > maior) maior = v[i];
    }
    printf("Maior valor: %d\n", maior);
    return 0;
}
