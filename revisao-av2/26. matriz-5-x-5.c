#include <stdio.h>

int main() {
    int M[5][5], soma_col1 = 0, soma_lin3 = 0, temp;
    
    // Leitura simplificada com valores pré-definidos para focar na lógica (ou ler via scanf)
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            scanf("%d", &M[i][j]);

    // Soma primeira coluna (índice 0) e terceira linha (índice 2)
    for(int i=0; i<5; i++) {
        soma_col1 += M[i][0];
        soma_lin3 += M[2][i];
    }
    printf("Soma col 1: %d, Soma lin 3: %d\n", soma_col1, soma_lin3);
    
    // Troca 2ª (idx 1) com 5ª linha (idx 4)
    for(int j=0; j<5; j++) {
        temp = M[1][j];
        M[1][j] = M[4][j];
        M[4][j] = temp;
    }
    // Troca 1ª (idx 0) com 4ª coluna (idx 3)
    for(int i=0; i<5; i++) {
        temp = M[i][0];
        M[i][0] = M[i][3];
        M[i][3] = temp;
    }
    
    return 0;
}
