#include <stdio.h>
#include <string.h>

int main() {
    char frase[200], c;
    int freq = 0;
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    printf("Digite um caractere para pesquisar: ");
    scanf(" %c", &c);
    
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == c) freq++;
    }
    
    printf("Frequencia de %c = %d\n", c, freq);
    return 0;
}
