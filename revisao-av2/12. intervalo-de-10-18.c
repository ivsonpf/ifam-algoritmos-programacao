#include <stdio.h>

int main() {
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if (idade >= 10 && idade <= 18) printf("No intervalo de 10 a 18 anos.\n");
    else printf("Fora do intervalo.\n");
    return 0;
}
