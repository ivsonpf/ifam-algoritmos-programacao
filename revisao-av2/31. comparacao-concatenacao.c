#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], concatenada[200];
    
    printf("Digite a string 1: ");
    scanf("%s", str1);
    printf("Digite a string 2: ");
    scanf("%s", str2);
    
    printf("Tamanho str1: %lu\n", strlen(str1));
    printf("Tamanho str2: %lu\n", strlen(str2));
    
    if (strcmp(str1, str2) == 0) printf("As strings sao iguais.\n");
    else printf("As strings sao diferentes.\n");
    
    strcpy(concatenada, str1);
    strcat(concatenada, str2);
    printf("Concatenadas: %s\n", concatenada);
    return 0;
}
