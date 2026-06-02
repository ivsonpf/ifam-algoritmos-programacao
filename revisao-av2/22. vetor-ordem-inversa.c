#include <stdio.h>

int main() {
    int v[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (int i = 9; i >= 0; i--) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
