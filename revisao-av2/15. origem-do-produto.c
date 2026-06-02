#include <stdio.h>

int main() {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    
    switch(codigo) {
        case 1: printf("Sul\n"); break;
        case 2: printf("Norte\n"); break;
        case 3: printf("Leste\n"); break;
        case 4: printf("Oeste\n"); break;
        case 5: case 6: printf("Nordeste\n"); break;
        case 7: case 8: case 9: printf("Centro-Oeste\n"); break;
        default: printf("Produto Importado / Invalido\n");
    }
    return 0;
}
