#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    printf("Divisao inteira: %d\n", n1 / n2);
    printf("Resto da divisao: %d\n", n1 % n2);
    return 0;
}
