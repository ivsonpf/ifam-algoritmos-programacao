#include <stdio.h>

void mostra (int num[10]);

int main (){
	int t [10], i; //variável local
	for (i=0;i<10;i++)
	t[i]=i;
	mostra (t);
	return 0;
}

void mostra (int num[10]){
	int i;
	for(i=0;i<10;i++)
	printf("%d\t", num[i]);
}
