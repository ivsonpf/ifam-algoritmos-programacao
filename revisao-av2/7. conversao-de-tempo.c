#include <stdio.h>

int main() {
    int total_segundos, h, m, s;
    printf("Digite os segundos: ");
    scanf("%d", &total_segundos);
    h = total_segundos / 3600;
    m = (total_segundos % 3600) / 60;
    s = total_segundos % 60;
    printf("%d segundos sao %d horas %d minutos e %d segundos\n", total_segundos, h, m, s);
    return 0;
}
