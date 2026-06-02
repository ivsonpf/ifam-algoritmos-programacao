#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    int cont = 0;
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    for(int i = 0; i < strlen(frase); i++) {
        if(frase[i] == 'a' || frase[i] == 'A') cont++;
    }
    printf("Total de 'a': %d\n", cont);
    return 0;
}
