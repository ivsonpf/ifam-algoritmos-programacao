#include <stdio.h>

int main() {
    float S = 0.0;
    for (int i = 1; i <= 37; i++) {
        S += (float)((38 - i + 1) * (38 - i + 2)) / i;
    }
    printf("Soma S = %.2f\n", S);
    return 0;
}
