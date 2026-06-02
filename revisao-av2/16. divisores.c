#include <stdio.h>

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("Divisores: ");
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
