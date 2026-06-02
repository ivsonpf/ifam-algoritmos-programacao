#include <stdio.h>
#include <string.h>

int main() {
    char user[50], pass[50];
    char corretouser[] = "admin";
    char corretopass[] = "1234@xyz";
    
    printf("Login: ");
    scanf("%s", user);
    printf("Senha: ");
    scanf("%s", pass);
    
    if (strcmp(user, corretouser) == 0 && strcmp(pass, corretopass) == 0) {
        printf("Acesso Permitido\n");
    } else {
        printf("Acesso Negado\n");
    }
    return 0;
}
