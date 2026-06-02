#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n % 2 == 0 && n % 3 == 0) printf("Divisivel por 2 e 3 simultaneamente.\n");
    else printf("Nao eh divisivel por 2 e 3 simultaneamente.\n");
    return 0;
}
