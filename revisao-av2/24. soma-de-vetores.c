#include <stdio.h>

int main() {
    int A[10], B[10], C[10];
    printf("Digite 10 valores para A:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &A[i]);
    printf("Digite 10 valores para B:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &B[i]);
    
    printf("Vetor C (Soma):\n");
    for(int i = 0; i < 10; i++) {
        C[i] = A[i] + B[i];
        printf("%d ", C[i]);
    }
    printf("\n");
    return 0;
}
