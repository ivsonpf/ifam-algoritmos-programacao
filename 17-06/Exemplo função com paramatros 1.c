#include <stdio.h>

void box(int a, int b, int c); //Declaração da função
int main(){
	box(2,3,4);
	box(7,1,3);
	box(5,4,2);
	return 0;
}

void box(int  a, int b, int c){
	printf("Volume da caixa=%d \n", a *b *c);
}
