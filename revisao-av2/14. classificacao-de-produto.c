#include <stdio.h>

int main() {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    
    if (codigo >= 1 && codigo <= 3) printf("Refrigerante\n");
    else if (codigo == 4 || codigo == 5) printf("Suco em caixa\n");
    else if (codigo == 6) printf("Agua Mineral\n");
    else if (codigo >= 7 && codigo <= 10) printf("Cerveja\n");
    else printf("Invalido\n");
    return 0;
}
