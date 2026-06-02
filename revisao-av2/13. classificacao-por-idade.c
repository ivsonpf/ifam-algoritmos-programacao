#include <stdio.h>

int main() {
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if (idade < 18) printf("Classificacao: menor\n");
    else if (idade <= 60) printf("Classificacao: adulto\n");
    else printf("Classificacao: idoso\n");
    return 0;
}
