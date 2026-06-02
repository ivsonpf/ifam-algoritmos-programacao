#include <stdio.h>

int main() {
    float salario, aumento, novo_salario;
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    aumento = salario * 0.15;
    novo_salario = salario + aumento;
    printf("Aumento: R$%.2f\nNovo Salario: R$%.2f\n", aumento, novo_salario);
    return 0;
}
