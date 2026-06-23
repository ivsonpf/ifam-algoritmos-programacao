#include <stdio.h>

float media (int num[10]);

int main (){
    int t[10], i; // variável local
    
    // Preenchimento do vetor
    for (i = 0; i < 10; i++) {
        t[i] = i;
    }
    
    // Chama a função correta e armazena o resultado
    float resultado = media(t);
    
    // Imprime o resultado final
    printf("\nA media dos valores e: %.2f\n", resultado);
    
    return 0;
}

float media (int num[10]){
    int i, soma = 0;
    
    for(i = 0; i < 10; i++){
        printf("%d\t", num[i]);
        soma += num[i];
    }
    
    // Retorna a média corrigindo o problema da divisão de inteiros
    return (float)soma / 10.0; 
}
