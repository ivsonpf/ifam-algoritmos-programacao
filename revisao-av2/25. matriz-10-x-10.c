#include <stdio.h>

int main() {
    int M[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) M[i][j] = 0;
            else if (j > i) M[i][j] = 1;
            else M[i][j] = 2;
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
