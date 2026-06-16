#include <stdio.h>

// Definição da struct
struct atleta {
    char nome[50];
    int idade;
    float altura, peso;
};

// 1) Declarar a struct como variável Global (um vetor de 3 posições)
struct atleta lista_atletas[3];

// 2) Função para ler os dados de 3 atletas
void ler_dados() {
    int i; // Variável local para o laço de repetição
    
    printf("=== CADASTRO DE ATLETAS ===\n");
    for (i = 0; i < 3; i++) {
        printf("\nDigite os dados do atleta %d:\n", i + 1);
        
        printf("Nome: ");
        // O espaço antes do % limpa a sujeira do teclado (buffer) 
        // e o [^\n] permite ler nomes com espaço
        scanf(" %[^\n]", lista_atletas[i].nome); 
        
        printf("Idade: ");
        scanf("%d", &lista_atletas[i].idade);
        
        printf("Altura (ex: 1.75): ");
        scanf("%f", &lista_atletas[i].altura);
        
        printf("Peso (ex: 70.5): ");
        scanf("%f", &lista_atletas[i].peso);
    }
}

// 3) Função para mostrar os dados dos 3 atletas
void mostrar_dados() {
    int i;
    
    printf("\n\n=== RELATORIO DE ATLETAS ===\n");
    for (i = 0; i < 3; i++) {
        printf("\nAtleta %d:\n", i + 1);
        printf("Nome: %s\n", lista_atletas[i].nome);
        printf("Idade: %d anos\n", lista_atletas[i].idade);
        printf("Altura: %.2f m\n", lista_atletas[i].altura);
        printf("Peso: %.2f kg\n", lista_atletas[i].peso);
    }
}

// Função Principal
int main() {
    
    // Como a variável é global, só precisamos chamar as funções
    ler_dados();
    mostrar_dados();
    
    return 0;
}
