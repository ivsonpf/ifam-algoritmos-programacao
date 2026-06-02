#include <stdio.h>

int main() {
    char sexo;
    float altura, peso_ideal;
    printf("Digite o sexo (M/F) e a altura: ");
    scanf(" %c %f", &sexo, &altura);
    
    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo invalido.\n");
        return 1;
    }
    printf("Peso ideal: %.2f\n", peso_ideal);
    return 0;
}
