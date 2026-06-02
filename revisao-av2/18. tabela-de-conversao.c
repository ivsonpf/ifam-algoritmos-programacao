#include <stdio.h>

int main() {
    float C;
    printf("Fahrenheit\tCelsius\n");
    for (int F = 50; F <= 150; F += 2) {
        C = (5.0 / 9.0) * (F - 32);
        printf("%d\t\t%.2f\n", F, C);
    }
    return 0;
}
